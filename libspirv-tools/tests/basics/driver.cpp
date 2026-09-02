#include <spirv-tools/libspirv.h>
#include <spirv-tools/optimizer.hpp>

#undef NDEBUG
#include <cassert>
#include <cstring>

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
}
