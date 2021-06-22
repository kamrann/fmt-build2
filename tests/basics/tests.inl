
int main ()
{
  // THESE EXAMPLES ARE EXTRACTED FROM THE README AND SHOULD BE UPDATED EACH BREAKING VERSION

  {
      fmt::print("Hello, world!\n");

      std::string s = fmt::format("The answer is {}.", 42);
      assert(s == "The answer is 42.");

      std::string s2 = fmt::format("I'd rather be {1} than {0}.", "right", "happy");
      assert(s2 == "I'd rather be happy than right.");

  }

  {
    std::vector<int> v = {1, 2, 3};
    fmt::print("{}\n", v);
  }

  {
    fmt::print(fg(fmt::color::crimson) | fmt::emphasis::bold,
                 "Hello, {}!\n", "world");
    fmt::print(fg(fmt::color::floral_white) | bg(fmt::color::slate_gray) |
                fmt::emphasis::underline, "Hello, {}!\n", "мир");
    fmt::print(fg(fmt::color::steel_blue) | fmt::emphasis::italic,
                "Hello, {}!\n", "世界");
  }

  {
    using namespace std::literals::chrono_literals;
    fmt::print("Default format: {} {}\n", 42s, 100ms);
    fmt::print("strftime-like format: {:%H:%M:%S}\n", 3h + 15min + 30s);
  }

  {
    fmt::print("Hello, {}!", "world");  // Python-like format string syntax
    fmt::printf("Hello, %s!", "world"); // printf format string syntax
  }

  {
    std::string s = fmt::format("I'd rather be {1} than {0}.", "right", "happy");
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

