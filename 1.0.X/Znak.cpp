#include <iostream>

auto main() -> int
{
        int a;
	std::cout << "Podaj liczbę: ";
	std::cin >> a;
	if (a<0) std::cout << "-1 \n";
	else if (a>0) std::cout << "1 \n";
	else std::cout << "0 \n";
	return 0;
}

