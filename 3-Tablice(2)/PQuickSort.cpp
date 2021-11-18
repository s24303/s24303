#include <iostream>
#include <cstdlib>
#include <ctime>

int partition (int tab[], int low, int high) //Funkcja dzieląca tabelę na 2 części
{
	int pivot = tab[high]; //Ostatnia wartość
	int i = (low - 1); //Indeks pierwszej wartości

	for (int j = low; j <= high-1; j++)
	{
		if (tab[j] < pivot) //Jeśli element jest mniejszy od pivotu
		{
			i++;
			std::swap(tab[i], tab[j]);
		}
	}
 	std::swap(tab[i+1], tab[high]);
	return (i+1);
}

void QuickSort (int tab[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(tab, low, high);

		//Sortowanie po podzieleniu

		QuickSort(tab, low, pi-1);
		QuickSort(tab, pi+1, high);
	}
}

void print(int tab[], int size)  //Funkcja do wypisywania tabeli
{
	for (int i = 0; i < size; i++)
		std::cout << i + 1 << ". " << tab[i] << "\n";
	std::cout << "\n";
}

int main()
{
	srand(time(NULL));

	int lenght = 10;
       	int tab[100];
	for (int i=0; i<lenght; i++)
	{
		tab[i] = (std::rand()%10);
	}
	std::cout << "Tablica przed sortowaniem: \n";
	print(tab, lenght);

	QuickSort(tab, 0, lenght-1);
	
	std::cout << "Posortowana tablica: \n";
	print(tab, lenght);


	return 0;
}

