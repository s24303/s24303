#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


void copyTableToVector(int tab[100][8])
{
	std::vector<int> vector;
	for (int i = 0; i < 100; i++)
                if (i%5 == 0)
			for (int j = 0; j < 8; j++)
			{
				int a = tab[i][j];
				vector.push_back(a);
			}

	int rozmiar = vector.size();
	std::cout << vector[rozmiar-1] << "\n"; 
}

int main()
{
	srand(time(NULL));
	int tab[100][8];

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 8; j++)
			tab[i][j] = (std::rand()%20);
	}


	copyTableToVector(tab);
	return 0;
}
