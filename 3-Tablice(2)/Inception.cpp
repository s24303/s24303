#include <iostream>
#include <string>

int max2(int a, int b) 
{
	if (a > b) 
		return a;
	else
		return b;
}

int max3(int a, int b, int c) 
{
	if (max2(a, b) > c) 
		return max2(a, b);
	else 
		return c;
}

int main(int argc, char *argv[]) 
{
	if (argc < 3)
		std::cerr << "Za mało danych! \n";
	else if (argc == 3)
	{
		int a = std::atoi(argv[1]);
	      	int b = std::atoi(argv[2]);
		std::cout << "Największa wartość to: " << max2(a, b) << "\n";
	}
	else if (argc == 4)
	{
		int a = std::atoi(argv[1]);
	        int b = std::atoi(argv[2]);
       		int c = std::atoi(argv[3]);

		std::cout << "Największa wartość to: " << max3(a, b, c) << "\n";
	}
	else
		std::cerr << "Za dużo danych! \n";

	return 0;
}
