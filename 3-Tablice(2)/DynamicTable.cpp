#include <iostream>
#include <vector>

int main()
{
	int a, rozmiar;
	std::vector <int> vector;

	do
	{
		std::cout << "Podaj " << vector.size() + 1 << ". liczbę: ";
		std::cin >> a;
		vector.push_back (a);
		rozmiar = vector.size();
	}
	while (a != 0);

	for (int i = 0; i < rozmiar-1; i++)
	{
		if (i%5 == 0) std::cout << "\n";
		std::cout << vector[i] << " ";
	};

	std::cout << "\n";
	return 0;
}
