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
			return 0;
		}
	}
	for (a; a>0; a--)
	{
		for (int i =2; i<a; i++)
		{
			if (a%i==1)
			{
				int suma = suma + a;
			}
		}
	}
	return 0;
}

