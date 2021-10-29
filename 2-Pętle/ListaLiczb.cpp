#include <iostream>

int main()
{
	int a, b, c;
	std::cout << "Podaj początkową liczbę: ";
	std::cin >> a;
	std::cout << "Podaj końcową liczbę: ";
	std::cin >> b;
	std::cout << "Podaj warunek podzielności: ";
	std::cin >> c;
	if (c == 0)
	{
		std::cout << "Podano błędne dane \n";
		return 0;
	};
	if (a<b)
	{
		do
		{
			if (a%c==0) std::cout << a << ", ";
			a++;
		}
		while (a<b);
	}
	else std::cout << "Podano błędne dane";
	std::cout << "\n";
	return 0;
}
