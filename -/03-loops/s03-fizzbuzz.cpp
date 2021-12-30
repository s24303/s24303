#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int {
  if (argc == 0) 
  {
    return 1;
  }
  auto number = std::stoi(argv[1]);
  
  for (int licz = 1; licz <= number; licz ++) 
  {
    if (licz % 3 != 0 && licz % 5 != 0) std::cout << licz << "\n";
    if (licz % 3 == 0 && licz % 5 != 0) std::cout << licz << " Fizz \n";
    if (licz % 3 != 0 && licz % 5 == 0) std::cout << licz << " Buzz \n";
    if (licz % 3 == 0 && licz % 5 == 0) std::cout << licz << " FizzBuzz \n";
  }
  return 0;
}

