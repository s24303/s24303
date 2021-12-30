#include <iostream>

int main()
{
	int a, h;

	std::cout << "Podaj szerokość: ";
	std::cin >> a;

	std::cout << "Podaj wysokość: ";
	std::cin >> h;

	for(int i = 1; i<=h; i++)
	{
		for (int x = 1; x<=a; x++)
		{
			std::cout << "x";
		};
		std::cout << "\n";
	};

	return 0;
}

