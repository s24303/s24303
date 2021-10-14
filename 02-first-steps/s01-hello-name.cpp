/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>

auto main() -> int
{
    std::cout << "Jak masz na imię?\n";

    auto name = std::string{};
    std::getline(std::cin, name);

    std::cout << "Hello, " << name << "!\n";
    return 0;
}
