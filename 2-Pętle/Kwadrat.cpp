#include <iostream>

int main()
{
        int a;

        std::cout << "Podaj długość boku kwadratu: ";
        std::cin >> a;

	if (a>=3)
	{

		for(int i = 1; i<=a; i++)
		{
			for (int x = 1; x<=a; x++)
			{
				std::cout << "*";
			};
			std::cout << "\n";
		};


	}
	else std::cout << "Bok nie może być mniejszy od 3!";

        return 0;
}







