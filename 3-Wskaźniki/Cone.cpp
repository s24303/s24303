#include <iostream>

void cone(int* p, int* w)
{
	auto static pi = 3.14;
	auto wysokosc = *p;
	auto promien = *w;
	auto V = (pi*promien*promien*wysokosc)/3;
	std::cout << "Objętość stożka wynosi: " << V << "\n";
	auto Pp = pi*promien*promien;
	std::cout << "Pole podstawy wynosi: " << Pp << "\n";
}

int main()
{
	int h, r;

	auto p = &h;
        auto w = &r;

	std::cout << "Podaj wysokość: ";
	std::cin >> h;

	std::cout << "Podaj promień: ";
	std::cin >> r;

	if (h <= 0 || r <= 0)
		std::cerr << "eror, długości nie mogą być mniejsze niż 0 \n";
	else
		cone (p, w);

	return 0;
}
