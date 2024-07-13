`{fmt}` library - Build2 package
================================

See [`{fmt}` documentation](https://fmt.dev/) for usage and details.

 - `{fmt}` : https://github.com/fmtlib/fmt/
 - Build2 : https://build2.org

Note: This is the source code for the build2 package of the `{fmt}` C++ library,
the actual library sources snapshot can be found in the `./upstream/` submodule.

## Configuration Options:

 - `config.fmt.enable_modules` : Set to `true` to build and provide the `fmt` C++ modules. If the compiler and C++ version don't support C++ modules (which is C++ > 20), this will result in a compilation failure. Set to `true` if `$cxx.features.modules == true` which means the configuration is set to enable C++ modules, `false` otherwise.



