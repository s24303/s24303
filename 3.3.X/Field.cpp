#include <iostream>

void end()
{
        for (int i = 0; i < 20; i++)
                std::cout << "-";
	std::cout << "\n";
}

void triangle(double a, double h)
{
	double wynik = a*h/2;
	std::cout << "Pole tójkąta wynosi: " << wynik << "\n";
	end();
}

void rectangle(double a, double b)
{
	double wynik = a*b;
	std::cout << "Pole prostokąta wynosi: " << wynik << "\n"; 
	end();
}

void circle(double r)
{
	double const pi = 3.14;
	double wynik = (pi*r*r)/2;

	std::cout << "Pole koła wynosi: " << wynik << "\n";
	end();
}

void trapeze(double a, double b, double h)
{
	double wynik = ((a+b)*h)/2;
	std::cout << "Pole trapeza wynosi: " << wynik << "\n";
        end();
}

void hexagon(int a)
{
	double wynik = (3*a*a*1.7)/2;
	std::cout << "Pole sześciokąta wynosi: " << wynik << "\n";
        end();
}

void eror()
{
	std::cerr << "Błędne dane! \n";
	std::cout << "\n";
	end();
}

int main()
{
	int f;
	double a, b, h, r;

	do
        {
                std::cout << "Pole jakiej figury chcesz obliczyć? \n";
                std::cout << "1. Trójkąta \n";
                std::cout << "2. Prostokąta \n";
                std::cout << "3. Koła \n";
                std::cout << "4. Trapezu \n";
                std::cout << "5. Sześciokąta foremnego \n";
                std::cout << std::endl;
                std::cout << "0. Wyjdź \n";

		std::cout << "Podaj numer programu: ";
                std::cin >> f;
		std::cout << "\n";

		if (!std::cin)
			std::cerr << "Błąd! Podaj numer programu! \n";

		switch (f)
		{
			case 0:
				return 0;
				break;
			case 1:
				std::cout << "Podaj długość podstawy: ";
				std::cin >> a;
				std::cout << "Podaj wysokość: ";
				std::cin >> h;
				std::cout << "\n";
				if (a > 0 && h > 0)
					triangle(a, h);
				else if (!std::cin)
				{
					std::cout << "Podawaj tylko liczby! \n";
					return 0;
				}
				else
					eror();
                                break;
			case 2:
                              	std::cout << "Podaj długość podstawy: ";
                                std::cin >> a;
                                std::cout << "Podaj wysokość: ";
                                std::cin >> b;
                                std::cout << "\n";
                                if (a > 0 && b > 0)
                                        rectangle(a, b);
                                else if (!std::cin)
                                {
                                        std::cout << "Podawaj tylko liczby! \n";
					return 0;
				}
				else
					eror();
                                break;
			case 3:
				std::cout << "Podaj długość promienia: ";
                                std::cin >> r;
                                std::cout << "\n";
                                if (r > 0)
                                        circle(r);
                                else if (!std::cin)
                                {
                                        std::cout << "Podawaj tylko liczby! \n";
                                        return 0;
                                }
                                else
                                        eror();
                                break;
			case 4:
				std::cout << "Podaj długość podstawy: ";
                                std::cin >> a;
				std::cout << "Podaj długość drugiej podstawy: ";
				std::cin >> b;
				std::cout << "Podaj wysokość: ";
				std::cin >> h;
                                std::cout << "\n";
                                if (a > 0 && b > 0 && h > 0)
                                        trapeze(a, b, h);
                                else if (!std::cin)
                                {
                                        std::cout << "Podawaj tylko liczby! \n";
                                        return 0;
                                }
                                else
                                        eror();
                                break;
			case 5:
				std::cout << "Podaj długość boku: ";
                                std::cin >> a;
                                std::cout << "\n";
                                if (a > 0)
                                        hexagon(a);
                                else if (!std::cin)
                                {
                                        std::cout << "Podawaj tylko liczby! \n";
                                        return 0;
                                }
                                else
                                        eror();
                               	break;

			default: std::cerr << "Błąd! Nie ma takiego programu! \n";
				std::cout << "\n";
		}
        }
        while (f != 0);


	return 0;
}
