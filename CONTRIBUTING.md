# Contributing

Contributions are welcome. Read [docs/decompiling.md](docs/decompiling.md) for the workflow, and [CLAUDE.md](CLAUDE.md) if
you work with AI agents.

## Clean-room rule

This project only accepts work derived from **your own dump of the game** and from **public** information. Any contribution
that used one of the following is rejected as a whole, even the parts that don't depend on it directly:

- leaked, stolen or confidential material from Nintendo, AlphaDream or their partners: source code (including NitroSDK,
  e.g. `ntr-NitroSDK/...`), internal documentation, debug builds, symbols or tools;
- code copied or adapted from such material, or checked against it ("reference source", "supplied SDK"...);
- game assets or data (ROM, graphics, sounds, text, extracted files) committed to the repository or embedded in source.

Allowed sources: the game binary you dumped yourself, the disassembly produced by the project tools, public documentation,
and other public decompilation projects (respecting their licenses).

When in doubt, ask before submitting. By opening a pull request, you confirm that your contribution follows this rule.

## Other rules

- Never commit anything from `extract/` or `build/`.
- Only mark a file `complete` through `tools/decomp.py complete`.
- Don't change `tools/configure.py`, compiler flags, `dev.sh` or `Dockerfile` without discussing it first.
