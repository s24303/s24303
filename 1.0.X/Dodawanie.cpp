#include <iostream>

auto main() -> int
{
        int a, b, suma;
	std::cout << "Podaj pierwszą liczbę: ";
	std::cin >> a;
	std::cout << "Podaj drugą liczbę: ";
	std::cin >> b;
	suma = a+b;
	std::cout << "Suma wynosi: " << suma << "\n";
	return 0;
}
