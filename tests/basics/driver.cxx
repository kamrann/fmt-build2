#include <cassert>
#include <sstream>
#include <stdexcept>

#include <fmt/version.h>
#include <fmt/printf.h>
#include <fmt/format.h>

int main ()
{
  // THESE EXAMPLES ARE EXTRACTED FROM THE README AND SHOULD BE UPDATED EACH BREAKING VERSION

  {
    fmt::print("Hello, {}!", "world");  // Python-like format string syntax
    fmt::printf("Hello, %s!", "world"); // printf format string syntax
  }

  {
    std::string s = fmt::format("I'd rather be {1} than {0}.", "right", "happy");
  }

  {
    fmt::memory_buffer buf;
    format_to(buf, "{}", 42);    // replaces itoa(42, buffer, 10)
    format_to(buf, "{:x}", 42);  // replaces itoa(42, buffer, 16)
  }
  
}

struct date {
  int year, month, day;
};

template <>
struct fmt::formatter<date> {
  constexpr auto parse(format_parse_context& ctx) { return ctx.begin(); }

  template <typename FormatContext>
  auto format(const date& d, FormatContext& ctx) {
    return format_to(ctx.out(), "{}-{}-{}", d.year, d.month, d.day);
  }
};

std::string s = fmt::format("The date is {}", date{2012, 12, 9});