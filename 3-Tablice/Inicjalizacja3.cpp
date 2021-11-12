#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));

        int k;

	std::cout << "Podaj zakres liczb: ";
	std::cin >> k;

       	int A[50];
	for (int i=0; i<50; i++)
	{
		A[i] = (std::rand()%k);
		std::cout << i+1 << ". " << A[i] << "\n";
	};
}

