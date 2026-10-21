Mario & Luigi: Bowser's Inside Story
[![Build Status]][actions] [![Code]][progress] [![Complete]][progress]
=============

[Build Status]: https://github.com/istornz/bowsers-inside-story-decomp/actions/workflows/build.yml/badge.svg
[actions]: https://github.com/istornz/bowsers-inside-story-decomp/actions/workflows/build.yml
[Code]: https://decomp.dev/istornz/bowsers-inside-story-decomp/usa.svg?mode=shield&measure=code&label=Code
[Complete]: https://decomp.dev/istornz/bowsers-inside-story-decomp/usa.svg?mode=shield&measure=complete_code_percent&label=Linked
[progress]: https://decomp.dev/istornz/bowsers-inside-story-decomp

<!-- markdownlint-disable MD033 -->
[<img src="https://decomp.dev/istornz/bowsers-inside-story-decomp.svg?w=512&h=256" width="512" height="256" alt="Progress map">][progress]
<!-- markdownlint-enable MD033 -->

**Work in progress!** This project aims to recreate source code for ***Mario & Luigi: Bowser's Inside Story*** (Nintendo DS, 2009)
through matching decompilation: the C/C++ code in this repository compiles back to a byte-identical copy of the original game code.

**The repository does not contain any game assets or code from the ROM.** To build it, you need your own dump of the game.

## Status

The game is delinked and linked back into byte-identical modules (ARM9 main, ITCM, DTCM and all 141 overlays).
20 overlays are fully decompiled, including overlay 002 (a double-ended heap allocator).

| Version | Game code | SHA-1 | Status |
| ------- | --------- | ----- | ------ |
| USA     | `CLJE`    | `099b07d55c43601c4866d475032ab9431356cc5d` | All modules rebuild, 30 / 12,221 functions decompiled, 20 / 141 overlays complete |

## Requirements

The toolchain ([`dsd`](https://github.com/AetiasHax/ds-decomp), [`objdiff`](https://github.com/encounter/objdiff),
the Metrowerks `mwccarm` compiler run through [`wibo`](https://github.com/decompals/wibo)) targets Linux/Windows x86-64.
A Docker image is provided so the project also builds on macOS, including Apple Silicon.

- [Docker Desktop](https://www.docker.com/products/docker-desktop/), with "Use Rosetta for x86_64/amd64 emulation" enabled on Apple Silicon
- Your own dump of the game

`./dev.sh` runs any command inside the build container with the repository mounted at `/work`. Without arguments it opens a shell.

## Setup

1. Put your ROM in [`extract/`](extract/README.md) (any file name ending in `.nds`).
2. Optional, only needed to rebuild a fully identical `.nds` file: put your ARM7 BIOS dump in the repository root as `arm7_bios.bin`.
3. Download the toolchain, extract the ROM and generate the `dsd` config:
   ```shell
   ./dev.sh python tools/bootstrap.py
   ```
4. Generate the build script and build:
   ```shell
   ./dev.sh python tools/configure.py usa
   ./dev.sh ninja
   ```

The default `ninja` target delinks the game, links it back, verifies every module byte for byte (`check`), rebuilds the ROM
and generates `objdiff.json`. When `arm7_bios.bin` is present, it also checks the SHA-1 of the whole ROM (`sha1`): without the BIOS,
the secure area CRC in the header can't be computed, so the rebuilt ROM differs from the original by 4 header bytes only.

Other useful targets: `ninja report` (progress report for decomp.dev), `ninja dis` (disassembly in `build/usa/asm/`),
`ninja apply` (copy symbol names from the built ELF back to `config/`).

### Compiler

The game was built with CodeWarrior for Nintendo DS 2.0 (`mwccarm` 2.0/sp1p5, `-O4,p`), in C++.
See [docs/compiler.md](docs/compiler.md) for how it was identified.

To test a function against every compiler version:

```shell
./dev.sh python tools/probe_compilers.py path/to/file.cpp
```

## Contributing

- [CONTRIBUTING.md](CONTRIBUTING.md): contribution rules, including the clean-room rule (no leaked material)
- [docs/decompiling.md](docs/decompiling.md): how to decompile a function
- [CLAUDE.md](CLAUDE.md): workflow and rules for AI agents (`tools/decomp.py`)
- AI agents: [`/decomp-unit`](.claude/skills/decomp-unit/SKILL.md) runs up to 8 Haiku
  [workers](.claude/agents/decomp-worker.md) in parallel on a whole unit, and
  [`/decomp-function`](.claude/skills/decomp-function/SKILL.md) puts Sonnet then Opus on one hard function
- [docs/ghidra.md](docs/ghidra.md): Ghidra setup with `dsd-ghidra`
- [docs/compiler.md](docs/compiler.md): how the compiler was identified
- [docs/ci.md](docs/ci.md): CI build and decomp.dev progress tracking

## Project structure

- `config/`: `dsd` configuration (symbols, relocations, delinks), committed
- `extract/`: your ROM and its extracted files, **never committed**
- `include/`, `src/`, `libs/`: decompiled headers and source code (game code and libraries)
- `tools/`: build scripts
- `build/`: build output

## License

The code in this repository is released under [CC0 1.0](LICENSE). It does not cover the game itself,
which remains the property of its owners.

## Credits

Build scripts adapted from [zeldaret/ph](https://github.com/zeldaret/ph) (CC0). Thanks to the
[DS decompilation community](https://github.com/AetiasHax/ds-decomp), [MnL-Modding](https://github.com/MnL-Modding)
and the authors of the [Partners in Time](https://github.com/Rainchus/PartnersInTime-Decomp) decompilation.
