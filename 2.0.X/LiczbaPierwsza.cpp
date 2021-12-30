#include <iostream>

int main()
{
	int a;
	std::cout << "Podaj liczbę do sprawdzenia: ";
	std::cin >> a;
	for (int i =2; i<a; i++)
	{
		if (a%i==0) 
		{
			std::cout << "Liczba " << a << " nie jest liczbą pierwszą. \n";
			return 0;
		}
	}
	std::cout << "Liczba " << a << " jest liczbą pierwszą. \n";
	return 0;
}

