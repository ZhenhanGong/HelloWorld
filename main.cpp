#include <iostream>
#include <string>
#include <optional>

std::optional<std::string> test_optional(bool b)
{
  std::string str = "string";
  if (b)
    return str;
  else
    return {};
}

int main()
{
    std::cout << "Hello World!" << std::endl;
    auto res = test_optional(true);
    std::cout << *res << std::endl;
    return 0;
}
