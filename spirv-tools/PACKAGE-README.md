# spirv-tools - SPIR-V Tools

This is a `build2` package for the [`<UPSTREAM-NAME>`](https://<UPSTREAM-URL>)
executable. It is a <SUMMARY-OF-FUNCTIONALITY>.

Note that the `spirv-tools` executable in this package provides `build2` metadata.


## Usage

To start using `spirv-tools` in your project, add the following build-time
`depends` value to your `manifest`, adjusting the version constraint as
appropriate:

```
depends: * spirv-tools ^<VERSION>
```

Then import the executable in your `buildfile`:

```
import! [metadata] <TARGET> = spirv-tools%exe{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
exe{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.spirv_tools.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
