#include <iostream>

int main()
{
        int n;

	std::cout << "Podaj rozmiar tablicy: ";
	std::cin >> n;

       	int A[100];
	for (int i=0; i<n; i++)
	{
		A[i] = 0;
		std::cout << A[i] << "\n";
	};
}

