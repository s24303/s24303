#include <iostream>
#include <string>

auto ask_user_for_integer(std::string prompt) -> int
{
   std::cout << prompt;
   auto n = std::string{};
   std::getline(std::cin, n);
   return std::stoi(n);
}

int main()
{
   int const a = ask_user_for_integer("a = ");
   int const b = ask_user_for_integer("b = ");
   std::cout << "Suma = " << (a + b) << "\n";
   return 0;
}
