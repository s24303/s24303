#include <iostream>

auto main() -> int
{	
	int a, b, c, d;

	std::cout << "Podaj pierwszą liczbę: ";
	std::cin >> a;

	std::cout << "Podaj drugą liczbę: ";
        std::cin >> b;

	std::cout << "Podaj trzecią liczbę: ";
        std::cin >> c;

	std::cout << "Podaj czwartą liczbę: ";
        std::cin >> d;

	std::cout << "\n";

	if (a < b) std::cout << a << " < " << b << "\n";
	else if (a > b) std::cout << a << " > " << b << "\n";

	if (a < c) std::cout << a << " < " << c << "\n";
        else if (a > c) std::cout << a << " > " << c << "\n";

	if (a < d) std::cout << a << " < " << d << "\n";
        else if (a > d) std::cout << a << " > " << d << "\n";

	if (b < c) std::cout << b << " < " << c << "\n";
        else if (b > c) std::cout << b << " > " << c << "\n";

	if (b < d) std::cout << b << " < " << d << "\n";
        else if (b > d) std::cout << b << " > " << d << "\n";

	if (c < d) std::cout << c << " < " << d << "\n";
        else if (c > d) std::cout << c << " > " << d << "\n";	
	
	return 0;
}

