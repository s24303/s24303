#include <iostream>

int main()
{
	int a, b;
	std::cout << "Podaj początkową liczbę: ";
	std::cin >> a;
	std::cout << "Podaj końcową liczbę: ";
	std::cin >> b;
	if (a<b)
	{
		do
		{
			std::cout << a << ", ";
			a++;
		}
		while (a<b);
	}
	else std::cout << "Podano błędne dane";
	std::cout << "\n";
	return 0;
}

