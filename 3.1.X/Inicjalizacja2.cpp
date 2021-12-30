#include <iostream>

int main()
{
        int n, start;

	std::cout << "Podaj rozmiar tablicy: ";
	std::cin >> n;

	std::cout << "Podaj początek tablicy: ";
	std::cin >> start;

       	int A[100];
	for (int i=0; i<n; i++)
	{
		A[i] = start;
		std::cout << A[i] << "\n";
		start++;
	};
}

