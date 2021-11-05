#include <iostream>

int main()
{
	int l, d, suma = 0;
	
	std::cout << "Podaj limit: ";
	std::cin >> l;
	std::cout << "Podaj dzielnik: ";
	std::cin >> d;

	for(int i = 0; i<=l; i++)
	{
		if (i%d == 0)
		{
			suma = suma + i;
		};
	};

	std::cout << "Suma liczb mniejszych lub równych " << l << " i podzielnych przez " << d << " wynosi: " << suma << "\n";
	
	return 0;
}

