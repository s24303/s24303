#include <iostream>

int main()
{
	int a;
	int wynik = 1;
	std::cout << "Podaj liczbę: ";
	std::cin >> a;

	for (int i = 1; i <= a; i++)
	{
		wynik *= i;
	}
	std::cout << "Silnia " << a << " wynosi: " << wynik << "\n";
	
	return 0;
}

