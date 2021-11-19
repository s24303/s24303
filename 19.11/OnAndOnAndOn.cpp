#include <iostream>

void size(int H, int r, int R)
{
	const double pi = 3.14;
	double capacity = (pi*H*(r*r+r*R+R*R))/3;

	std::cout << "Pojemność stożka wynosi: " << capacity << "\n";
}

int main()
{
	int H, r, R;

	do
	{
		std::cout << "Podaj H: ";
		std::cin >> H;
		std::cout << "Podaj r: ";
		std::cin >> r;
		std::cout << "Podaj R: ";
		std::cin >> R;
	
		if (H == 0 || r == 0 || R == 0)
			std::cerr << "Błędne dane! Wartość nie może wynosić 0! \n";
		else
			size (H, r, R);
	}
	while (H != 0 || r != 0 || R != 0);
	return 0;
}
