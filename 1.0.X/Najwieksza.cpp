#include <iostream>

auto main() -> int
{
        int a, b, c, najwieksza;
	std::cout << "Podaj pierwszą liczbę: ";
	std::cin >> a;
	std::cout << "Podaj drugą liczbę: ";
	std::cin >> b;
	std::cout << "Podaj trzecią liczbę: ";
	std::cin >> c;
	najwieksza = a;
	if (a < b) najwieksza = b;
	if (b < c) najwieksza = c;
	std::cout << "Najwięszką z podanych liczb jest liczba " << najwieksza << "\n";
	return 0;
}

