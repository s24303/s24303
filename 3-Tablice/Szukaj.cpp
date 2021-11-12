#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));

        int n, s, s_id = 0;

	std::cout << "Podaj rozmiar tablicy: ";
	std::cin >> n;

       	int A[100];
	for (int i=0; i<n; i++)
	{
		A[i] = (std::rand()%10);
		std::cout << i << ". " << A[i] << "\n";
	};

	std::cout << "Jakiej liczby szukasz? ";
	std::cin >> s;

	for (int i=0; i<n; i++)
        {
                if (A[i] == s)
		{
			s_id = i;
		}
        };

	std::cout << "Szukana liczba " << s << " ma indeks " << s_id << "\n";

	return 0;
}

