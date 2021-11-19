#include <iostream>
#include <vector>

int main()
{
	int a, rozmiar, suma = 0;
	double srednia = 1;
	std::vector <int> tab;

	do
	{
		std::cout << "Podaj " << tab.size()+1 << " wartość: ";
		std::cin >> a;
		tab.push_back(a);
		rozmiar = tab.size();
	}
	while (a != 0);

	for (int i = 0; i < rozmiar - 1; i++)
	{
		suma += tab[i];
	}
	srednia = suma/(tab.size()-1);
	std::cout << "Średnia wynosi: " << srednia << "\n";

	return 0;
}
