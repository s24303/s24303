#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int {
  if (argc == 0) {
    return 1;
  }
  auto number = std::stoi(argv[1]);
  for (; number >= 0; number--) {
    std::cout << number << "\n";
  }
  return 0;
}
