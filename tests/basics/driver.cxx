#include <cassert>
#include <sstream>
#include <stdexcept>

#include <fmt-build2/version.hxx>
#include <fmt-build2/fmt-build2.hxx>

int main ()
{
  using namespace std;
  using namespace fmt_build2;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
