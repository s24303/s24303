#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));

        int n, max = 0, max_id, min = 11, min_id;

	std::cout << "Podaj rozmiar tablicy: ";
	std::cin >> n;

       	int A[100];
	for (int i=0; i<n; i++)
	{
		A[i] = (std::rand()%10);
		std::cout << i << ". " << A[i] << "\n";

		for(int x = 0; x<n; x++)
		{
			if(A[i] > max)
			{
				max = A[i];
				max_id = i;
			}
			else if(A[i] < min)
			{
				min = A[i];
				min_id = i;
			}
		}
	};
	std::cout << "Najmniejsza wartość z tablicy ma indeks: " << min_id << " i wynosi: " << min << "\n";
	std::cout << "Największa wartość z tablicy ma indeks: " << max_id << " i wynosi: " << max << "\n";

	return 0;
}

