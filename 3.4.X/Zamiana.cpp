#include <iostream>
#include <string>

void swap(char** p, char** w)
{
	auto help = **p;
	**p = **w;
	**w = help;
	
	std::cout << "Liczby po zamianie wartości: \n" << *p << ", " << *w << "\n";
}

int main(int argc, char *argv[])
{
	auto a = argv[1];
        auto b = argv[2];

        auto p = &a;
        auto w = &b;

	if (argc < 3)
		std::cerr << "eror - Za mało danych!\n";
	else if (argc > 3)
		std::cerr << "eror - Za dużo danych!\n";
	else
	{
		std::cout << "Liczby przed zamianą: \n" << *p << ", " << *w << "\n"; //test
		swap(p, w);
	}

	return 0;
}

