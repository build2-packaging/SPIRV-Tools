# SPIRV-Tools - SPIR-V assembler, disassembler, validator, and optimizer

This is a `build2` package repository for
[`SPIRV-Tools`](https://github.com/KhronosGroup/SPIRV-Tools), the Khronos
API and command line tools for processing SPIR-V modules. It contains:

- `libspirv-tools` - the core, optimizer, linker, linter, reducer, and diff libraries
- `spirv-tools` - the command line tools (`spirv-as`, `spirv-dis`, `spirv-val`,
  `spirv-opt`, and the rest)

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`SPIRV-Tools` in your `build2`-based project, then instead see the accompanying
[`libspirv-tools/PACKAGE-README.md`](libspirv-tools/PACKAGE-README.md) and
[`spirv-tools/PACKAGE-README.md`](spirv-tools/PACKAGE-README.md) files.

The development setup for `SPIRV-Tools` uses the standard `bdep`-based workflow.
For example:

```
git clone --recursive https://github.com/build2-packaging/SPIRV-Tools.git
cd SPIRV-Tools

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
