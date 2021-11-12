#include <iostream>
#include <array>

int main()
{
	std::array<char, 94> ASCIItable;

//	int a;
//	std::cout << "Podaj numer: ";
//	std::cin >> a;
//	std::cout << "Value " << a << " in ASCII is: " << char(a) << std::endl;

	for (int i=33; i<=126; i++)
	{
		ASCIItable[i] = i;
		std::cout << ASCIItable[i] << "\n";
	};
	return 0;
}

