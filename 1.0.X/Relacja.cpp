#include <iostream>

auto main() -> int
{
        int a, b;
	std::cout << "Podaj pierwszą liczbę: ";
	std::cin >> a;
	std::cout << "Podaj drugą liczbę: ";
	std::cin >> b;
	if (a>b) std::cout << a << " > " << b << "\n";
	else if (a<b) std::cout << a << " < " << b << "\n";
	else std::cout << a << " == " << b << "\n";
	return 0;
}

