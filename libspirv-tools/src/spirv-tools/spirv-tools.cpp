#include <spirv-tools/spirv-tools.hpp>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace spirv_tools
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
