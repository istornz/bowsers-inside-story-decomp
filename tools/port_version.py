#!/usr/bin/env python3

###
# Ports the decompilation progress of the reference version (usa) to another version (eur).
# Run inside the container after `tools/bootstrap.py` for the target version, then rerun it after decompiling new functions:
#   python tools/port_version.py eur
#
#   1. aligns the symbol list of every module of both versions (same kinds in the same order)
#   2. renames the target's symbols to the reference names, so one source file links in every version
#   3. rewrites the target's delinks.txt with the reference file entries, at the target's addresses
#
# The target's delinks.txt file entries are generated: edit the reference version instead. A `complete` file whose code
# differs in the target makes its `ninja` fail: the function then needs version-specific code (`#ifdef eur`).
###

import argparse
import difflib
import re
import sys
from pathlib import Path

from decomp import SYMBOL_RE, parse_delinks, write_delinks

root_path = Path(__file__).resolve().parent.parent
REFERENCE_VERSION = "usa"


def load_symbols(path: Path) -> list[tuple[str, str, str, int]]:
    symbols = []
    for line in path.read_text().splitlines():
        m = SYMBOL_RE.match(line.strip())
        if m:
            symbols.append((m.group(1), m.group(2), m.group(3) or "", int(m.group(4), 16)))
    return symbols


def shape(symbol: tuple[str, str, str, int]) -> tuple[str, str]:
    # Function sizes may differ between versions, the kind and the arm/thumb mode may not
    return symbol[1], re.sub(r",?size=0x[0-9a-fA-F]+", "", symbol[2])


def size(symbol: tuple[str, str, str, int]) -> int | None:
    m = re.search(r"size=(0x[0-9a-fA-F]+)", symbol[2])
    return int(m.group(1), 16) if m else None


RELOC_RE = re.compile(r"from:(0x[0-9a-fA-F]+) kind:(\w+) to:(0x[0-9a-fA-F]+)(?: add:\S+)? module:(\S+)")


def load_relocs(path: Path) -> dict[int, tuple[str, int, str]]:
    """Relocations by source address: (kind, target address, target module)."""
    relocs = {}
    for line in path.read_text().splitlines():
        m = RELOC_RE.match(line.strip())
        if m:
            relocs[int(m.group(1), 16)] = (m.group(2), int(m.group(3), 16), m.group(4))
    return relocs


def module_key(module: Path) -> str:
    """The `module:` value of relocations to this module."""
    name = module.name if module.parts else "main"
    return f"overlay({int(name[2:])})" if name.startswith("ov") else name


def generated_name(symbol: tuple[str, str, str, int], module: Path) -> str:
    prefix = "func" if symbol[1] == "function" else "data"
    overlay = f"{module.name}_" if module.name.startswith("ov") else ""
    return f"{prefix}_{overlay}{symbol[3]:08x}"


def main():
    parser = argparse.ArgumentParser(description="Ports delinks and symbol names from the reference version")
    parser.add_argument("version", help="Target version, e.g. eur")
    args = parser.parse_args()

    ref_root = root_path / "config" / REFERENCE_VERSION / "arm9"
    dst_root = root_path / "config" / args.version / "arm9"
    if not dst_root.is_dir():
        sys.exit(f"config/{args.version}/ not found: run `python tools/bootstrap.py` with that ROM first")

    modules = [p.parent for p in sorted(ref_root.rglob("symbols.txt"))]
    ref_syms = {m: load_symbols(m / "symbols.txt") for m in modules}
    dst_syms = {m: load_symbols(dst_root / m.relative_to(ref_root) / "symbols.txt") for m in modules}

    # 1. Symbol runs with the same shape are paired in order. Function sizes make this reliable for functions, but data
    #    symbols have no size: version-specific data shifts the pairing, so it's only a fallback for data (step 2)
    seq_pairs: dict[Path, list[tuple]] = {}
    for m in modules:
        ref, dst = ref_syms[m], dst_syms[m]
        matcher = difflib.SequenceMatcher(None, [shape(s) for s in ref], [shape(s) for s in dst], autojunk=False)
        seq_pairs[m] = [pair for tag, i1, i2, j1, j2 in matcher.get_opcodes() if tag == "equal"
                        for pair in zip(ref[i1:i2], dst[j1:j2])]

    # 2. Paired functions of the same size reference the same data at the same offsets: their relocations pair the data
    relocs = {v: {m: load_relocs(root / m.relative_to(ref_root) / "relocs.txt") for m in modules}
              for v, root in (("ref", ref_root), ("dst", dst_root))}
    evidence: dict[tuple[str, int], set[int]] = {}
    for m in modules:
        ref_by_from = relocs["ref"][m]
        dst_by_from = relocs["dst"][m]
        for r, d in seq_pairs[m]:
            if r[1] != "function" or size(r) != size(d):
                continue
            for offset in range(0, size(r), 4):
                a, b = ref_by_from.get(r[3] + offset), dst_by_from.get(d[3] + offset)
                if a is not None and b is not None and a[0] == b[0] and a[2] == b[2]:
                    evidence.setdefault((a[2], a[1]), set()).add(b[1])

    renamed = ported = 0
    skipped: list[str] = []
    new_names: dict[Path, dict[str, str]] = {}
    all_names: list[str] = []
    delinks: list[tuple[Path, str, list[dict]]] = []
    for m in modules:
        dst_module = dst_root / m.relative_to(ref_root)
        ref, dst = ref_syms[m], dst_syms[m]
        key = module_key(m.relative_to(ref_root))
        dst_at = {s[3]: s for s in dst}
        names: dict[str, str] = {}
        used: set[str] = set()
        for r in ref:
            targets = evidence.get((key, r[3]))
            if r[1] != "function" and targets is not None and len(targets) == 1:
                d = dst_at.get(next(iter(targets)))
                if d is not None and d[0] not in names:
                    names[d[0]] = r[0]
                    used.add(r[0])
        addrs: dict[int, int] = {}
        for r, d in seq_pairs[m]:
            if r[1] == "function":
                addrs[r[3]] = d[3]
                addrs[r[3] + size(r)] = d[3] + size(d)
            if d[0] not in names and r[0] not in used:
                names[d[0]] = r[0]
                used.add(r[0])
        # Unpaired symbols named after an older pairing get their generated name back, and a version-specific symbol
        # whose name a paired symbol takes over gets a version suffix
        paired = set(names)
        for s in dst:
            if s[0] in paired:
                continue
            if re.fullmatch(r"(func|data)_(ov\d{3}_)?[0-9a-f]{8}(_\w+)?", s[0]):
                names[s[0]] = generated_name(s, m.relative_to(ref_root))
            if names.get(s[0], s[0]) in used:
                names[s[0]] = f"{generated_name(s, m.relative_to(ref_root))}_{args.version}"
        new_names[dst_module] = names
        all_names += [names.get(s[0], s[0]) for s in dst]

        header, ref_files = parse_delinks(m / "delinks.txt")
        dst_header, _ = parse_delinks(dst_module / "delinks.txt")
        files = []
        for entry in ref_files:
            if all(start in addrs and end in addrs for _, start, end in entry["sections"]):
                entry["sections"] = [[name, addrs[start], addrs[end]] for name, start, end in entry["sections"]]
                files.append(entry)
            else:
                skipped.append(entry["name"])
        ported += len(files)
        delinks.append((dst_module / "delinks.txt", dst_header, files))

    duplicates = sorted({n for n in all_names if all_names.count(n) > 1})
    if duplicates:
        sys.exit(f"Renaming would create duplicate symbols, symbols.txt left unchanged: {', '.join(duplicates[:10])}")
    for path, header, files in delinks:
        write_delinks(path, header, files)
    for dst_module, names in new_names.items():
        path = dst_module / "symbols.txt"
        lines = []
        for line in path.read_text().splitlines():
            name = line.split(" ", 1)[0]
            if names.get(name, name) != name:
                line = names[name] + line[len(name):]
                renamed += 1
            lines.append(line)
        path.write_text("\n".join(lines) + "\n")

    print(f"{ported} file entries ported, {renamed} symbols renamed")
    for name in skipped:
        print(f"Skipped {name}: its sections don't map to {args.version} symbols, add it by hand")


if __name__ == "__main__":
    main()
