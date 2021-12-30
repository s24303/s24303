#include <cstring>
#include <iostream>

void MemSet(int s, int c, int n)
{
	char tab[100];
	if (s > 100)
		std::cerr << "Za duży rozmiar tablicy! \n";
	if (s > c)
		std::cerr << "Błąd danych! \n";

	for (int i = 0; i < c; i++)
	{
		tab[i] = n;
		std::cout << tab[i] << "\n";
	}
}

int main(int argc, char *argv[])
{
	if (argc < 4)
		std::cerr << "Za mało danych! \n";
	else if (argc == 4)
	{
		int s = std::atoi(argv[1]);
		int c = std::atoi(argv[2]);
		int n = std::atoi(argv[3]);

		MemSet(s, c, n);
	}
	else
		std::cerr << "Za dużo danych! \n";

	return 0;
}
