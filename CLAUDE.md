# Bowser's Inside Story decompilation: agent guide

Matching decompilation of Mario & Luigi: Bowser's Inside Story (Nintendo DS, USA). The goal is C++ source that compiles to
**byte-identical** code. Read `README.md` and `docs/decompiling.md` once for context.

## Environment

- The toolchain only runs in the Docker container: prefix every build command with `./dev.sh`
  (e.g. `./dev.sh ninja`, `./dev.sh python tools/decomp.py ...`). Never run `ninja` or `tools/*.py` directly on macOS.
- Compiler: CodeWarrior for DS 2.0/sp1p5, `-O4,p`, C++ (see `docs/compiler.md`). The game uses AlphaDream's `cl` class prefix.

## Workflow: one function at a time

```shell
./dev.sh python tools/decomp.py todo ov123                 # functions of a module and their status
./dev.sh python tools/decomp.py info func_ov123_0207731c   # assembly, size, referenced symbols
./dev.sh python tools/decomp.py new func_ov123_0207731c    # creates src/ov123/func_ov123_0207731c.cpp + delinks entry
./dev.sh python tools/decomp.py new func_ov123_02077378 --file src/ov123/ov123.cpp   # or append to an adjacent file
# edit the source file, then:
./dev.sh python tools/decomp.py diff func_ov123_0207731c   # match % and instruction diff
./dev.sh python tools/decomp.py complete src/ov123/func_ov123_0207731c.cpp   # only when every function is at 100%
```

1. `info` the function, read the assembly carefully (literal pools are the `.word` lines after the function).
2. `new` it, write the C++, `diff`, iterate until `100.00%  MATCH`.
3. `complete` the file. It verifies every function, marks the file `complete` and rebuilds the whole game: if any module stops
   matching, it reverts. Several files can be completed with a single build: `complete a.cpp b.cpp ...`.
4. If the EUR ROM is extracted (`extract/eur/`), port the progress and check that EUR still matches:
   `./dev.sh sh -c "python tools/port_version.py eur && python tools/configure.py eur && ninja && python tools/configure.py usa"`.
   A file whose code differs in EUR needs version-specific code (`#ifdef eur`, the compiler gets `-d <version>`).

`new` takes several functions at once (`new func_a func_b`, one file each). `info` and `diff` never run ninja: several agents
can use them at the same time, each on its own source file. `new`, `complete` and `ninja` change shared state: run them only
when no other agent is working.

## Agent orchestration

- `/decomp-unit ov004` (skill `.claude/skills/decomp-unit/`): fast pass on a whole unit. A Sonnet orchestrator gives each
  function to a Haiku `decomp-worker` agent (`.claude/agents/`), 8 at most at the same time, verifies every result with its
  own `diff`, retries once, then leaves a `// TODO`. It completes only the functions that match at 100%.
- `/decomp-function func_ov001_02069ac8` (skill `.claude/skills/decomp-function/`): deep work on one hard function, usually
  a TODO left by `/decomp-unit`. Opus orchestrates up to 3 Sonnet `decomp-worker` attempts, then takes over for up to 3
  tries of its own, then leaves a `// TODO`.
- `/decomp-unit` never runs `/decomp-function`. Both share the review rules of `.claude/decomp-review.md`.
- Don't run two orchestrators at the same time: `new`, `complete` and `ninja` change shared state.

## Rules

- **Never edit** `tools/configure.py`, compiler flags, `dev.sh`, `Dockerfile`, or anything under `extract/` and `build/`.
- **Only mark a file `complete` through `tools/decomp.py complete`**, never by hand.
- Edit `config/` only through `tools/decomp.py` (`config/usa/`) and `tools/port_version.py` (other versions), except to fix
  symbols as described below. Never delete a delinks entry that is `complete`.
- If a function can't reach 100% after a reasonable number of attempts, leave its file **not complete** (the original code is
  linked instead, the build stays green) and move on. Keep the best attempt and add a `// TODO: ...` comment explaining
  what differs.
- Never commit unless asked. Never commit anything from `extract/` or `build/`.

## Code conventions

- Until the owning class is known, functions are `extern "C"` and keep their `symbols.txt` name (`func_ov122_0206d978`), so the
  symbol matches without renaming.
- Describe data with placeholder structs named `Unk_<module>_<address>` or by role, with an offset comment on every field:
  `/* 0x54 */ u32 unk54;`. Use the types from `include/types.h` (`s8`, `u16`, `s32`, `BOOL`...).
- Write code a 2009 developer could have written: natural loops and conditions, no pointer arithmetic tricks when a struct
  field expresses the same thing, no compiler-specific hacks to force a match.
- Globals keep their `symbols.txt` name and are declared `extern "C"` with their real type, e.g.
  `extern "C" Unk_ov002_Heap data_0205b7f0[4];`.
- Format with the repository `.clang-format` (4 spaces, 127 columns).

## Matching techniques that worked here

- Register allocation changes with declaration order, signedness (`s32` vs `u32` for a local fixed one function) and with
  intermediate variables.
- A single shared `return NULL;` at the end (code branches to it) means the source used nested `if`s, not early returns.
- Two stores merged into one `stmib`/`stmia` come from adjacent assignments in the source.
- A word read with two different bitfield layouts means a `union` of two bitfield structs (see `src/ov002/ov002.cpp`).
- `diff` reports `MATCH` when the instructions are identical and only the addresses of relocation targets differ (calls to
  functions of the same file): this is expected, `complete` checks them by linking.

## Fixing symbols

When `dsd` split one object into several symbols (e.g. `data_X` and `data_X+8` used as fields of one array), merge them in
the module's `symbols.txt` (`kind:bss(size=0x50)`) and rewrite relocations in every `relocs.txt` as
`to:0x<base> add:0x<offset>`. Run `./dev.sh ninja` afterwards: it must still succeed. `port_version.py` doesn't port these
merges: do the same edit in `config/eur/` (the addresses are usually the same).
