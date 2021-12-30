#include <iostream>

auto main() -> int
{
	int a, absolutna;
	std::cout << "Podaj liczbę: ";
	std::cin >> a;
	absolutna = a*-1;
	if (a>=0) std::cout << "Wartość absolutna z " << a << " wynosi " << a << "\n";
	else std::cout << "Wartość absolutna z " << a << " wynosi " << absolutna << "\n";
	return 0;
}

