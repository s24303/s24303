#include <iostream>

int main()
{
	int a;
	int wynik = 1;
	int i = 1;
	std::cout << "Podaj liczbę: ";
	std::cin >> a;

	do
	{
		wynik *= i;
		i++;
	}
	while (i<=a);
	std::cout << "Silnia " << a << " wynosi: " << wynik << "\n";
	
	return 0;
}

