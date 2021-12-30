#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));

        int n;
	int suma = 0;

	std::cout << "Podaj rozmiar tablicy: ";
	std::cin >> n;

       	int A[100];
	for (int i=0; i<n; i++)
	{
		A[i] = (std::rand()%10);
		suma = suma + A[i];

		std::cout << i+1 << ". " << A[i] << "\n";
	};
	std::cout << "\n" << "Suma elementów tablicy wynosi: " << suma << "\n";

	return 0;
}
