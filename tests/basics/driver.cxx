#include <cassert>
#include <sstream>
#include <stdexcept>

#include <fmt/version.h>
#include <fmt/printf.h>
#include <fmt/format.h>

int main ()
{
  fmt::print("Hello, {}!", "world");  // Python-like format string syntax
  fmt::printf("Hello, %s!", "world"); // printf format string syntax
}
