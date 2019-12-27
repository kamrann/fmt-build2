#pragma once

#include <iosfwd>
#include <string>

#include <fmt-build2/export.hxx>

namespace fmt_build2
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  FMT_BUILD2_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
