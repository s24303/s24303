#include <iostream>

auto main() -> int
{
        int a, b;
	std::cout << "Podaj pierwszą liczbę: ";
	std::cin >> a;
	std::cout << "Podaj drugą liczbę: ";
	std::cin >> b;
	if (a>b) std::cout << a << "jest większe \n";
	else std::cout << b << " jest większe \n";
	return 0;
}

