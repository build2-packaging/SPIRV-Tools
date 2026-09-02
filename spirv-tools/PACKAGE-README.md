# spirv-tools - SPIR-V assembler, disassembler, validator, and optimizer command line tools

This is a `build2` package for the [`SPIRV-Tools`](https://github.com/KhronosGroup/SPIRV-Tools)
command line tools. It provides the standalone assembler, disassembler,
validator, optimizer, linker, linter, reducer, CFG dumper, diff, and objdump
utilities.


## Usage

To start using `spirv-tools` in your project, add the following build-time
`depends` value to your `manifest`, adjusting the version constraint as
appropriate:

```
depends: * spirv-tools ^1.4.357
```

Then import the executable in your `buildfile`:

```
import spirv_as = spirv-tools%exe{spirv-as}
```


## Importable targets

This package provides the following importable targets:

```
exe{spirv-as}
exe{spirv-dis}
exe{spirv-val}
exe{spirv-opt}
exe{spirv-link}
exe{spirv-lint}
exe{spirv-reduce}
exe{spirv-cfg}
exe{spirv-diff}
exe{spirv-objdump}
```

These match upstream's tool names. `spirv-fuzz` is not built (it needs
protobuf and is optional upstream).


## Configuration variables

This package has no configuration variables.
