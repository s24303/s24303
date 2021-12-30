#include <iostream>

int main()
{
	int a;
	std::cout << "Podaj liczbę do sprawdzenia: ";
	std::cin >> a;
	
	if (a%2 != 0 && a%3 != 0 && a%5 != 0 && a%7 != 0 && a%11 != 0)
	{
		std::cout << "Liczba " << a << " jest pierwsza \n";
	}
	else if (a == 2 || a == 3 || a == 5 || a == 7 || a == 11)
	{
		std::cout << "Liczba " << a << " jest pierwsza \n";
	}

	else 
	{
		std::cout << "Liczba " << a << " nie jest pierwsza \n";
		return 0;
	}

	int suma = 0;
	for (int i=a; i>0; i--)
	{
		if (i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0 && i%11)
		{
			suma = suma + i;
		}
		if (i == 2 || i == 3 || i == 5 || i == 7 || i == 11)
       		{
                	suma = suma + i;
        	} 
	}
	std::cout << "Suma liczb pierwszych mniejszych lub równych " << a << " wynosi: " << suma << "\n";
	return 0;
}

