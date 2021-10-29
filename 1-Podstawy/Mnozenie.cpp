#include <iostream>

auto main() -> int
{
        int a, b, iloczyn;
	std::cout << "Podaj pierwszą liczbę: ";
	std::cin >> a;
	std::cout << "Podaj drugą liczbę: ";
	std::cin >> b;
	iloczyn = a*b;
	std::cout << "Iloczyn wynosi: " << iloczyn << "\n";
	return 0;
}

