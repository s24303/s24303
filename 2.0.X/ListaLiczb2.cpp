#include <iostream>

int main()
{
	int a, b, s;
	std::cout << "Podaj a: ";
	std::cin >> a;
	std::cout << "Podaj b: ";
	std::cin >> b;
	std::cout << "Podaj s: ";
	std::cin >> s;
	if (s<0) 
	{
		std::cout << "S nie może być ujemne! \n";
		s=s*-1;
	}
	if (a<b)
	{
		do
		{
			std::cout << a << ", ";
			a = a+s;
		}
		while (a<b);
	}
	else std::cout << "Podano błędne dane";
	std::cout << "\n";
	return 0;
}

