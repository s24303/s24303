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
   if (a <=0 ||b <=0)
   {
      std::cout << "Błędne dane\n";
   }
   else std::cout << "Wynik = " << (a * b) << "\n";
   return 0;
}
