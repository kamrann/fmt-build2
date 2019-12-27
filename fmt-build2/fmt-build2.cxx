#include <fmt-build2/fmt-build2.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace fmt_build2
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
