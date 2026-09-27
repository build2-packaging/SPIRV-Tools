#include <spirv-tools/libspirv.h>
#include <spirv-tools/optimizer.hpp>
#include <spirv-tools/linker.hpp>
#include <spirv-tools/linter.hpp>

#undef NDEBUG
#include <cassert>
#include <cstring>
#include <cstdint>
#include <vector>

int main ()
{
  // Non-inline C API: software version and context create/destroy.
  //
  const char* v (spvSoftwareVersionString ());
  assert (v != nullptr);
  assert (std::strlen (v) != 0);

  spv_context ctx (spvContextCreate (SPV_ENV_UNIVERSAL_1_6));
  assert (ctx != nullptr);
  spvContextDestroy (ctx);

  // Non-inline C++ optimizer API.
  //
  spvtools::Optimizer opt (SPV_ENV_UNIVERSAL_1_6);
  opt.RegisterPerformancePasses ();

  // Non-inline C++ linker API: linking no modules fails.
  //
  spvtools::Context lctx (SPV_ENV_UNIVERSAL_1_6);
  std::vector<std::vector<std::uint32_t>> bins;
  std::vector<std::uint32_t> linked;
  assert (spvtools::Link (lctx, bins, &linked) != SPV_SUCCESS);

  // Non-inline C++ linter API.
  //
  spvtools::Linter lint (SPV_ENV_UNIVERSAL_1_6);
}
