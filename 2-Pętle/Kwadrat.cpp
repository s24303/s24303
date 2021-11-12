#include <iostream>

int main()
{
        int a;

        std::cout << "Podaj długość boku kwadratu: ";
        std::cin >> a;

	int p = a-2;

	if (a>=3)
	{
		for (int i=0; i<a; i++)
		{
			std::cout << "*";
		}
		std::cout << "\n";

		for (int i=0; i<p; i++)
		{
			std::cout << "*";
			for (int i=0; i<p; i++)
			{
				std::cout << " ";
			}
			std::cout << "*";
			std::cout << "\n";
		}

		for (int i=0; i<a; i++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
	else std::cout << "Bok nie może być mniejszy od 3!";

        return 0;
}







