#include <iostream>

int main()
{
	int a;
	int wynik = 1;
	int i = 1;
	std::cout << "Podaj liczbę: ";
	std::cin >> a;

	while (i <= a)
	{
		wynik *= i;
		i++;
	}
	std::cout << "Silnia " << a << " wynosi: " << wynik << "\n";
	
	return 0;
}

