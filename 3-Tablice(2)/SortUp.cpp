#include <iostream>
#include <vector>

int main() 
{
	int a, rozmiar;
  	std::vector<int> vector;

  	do 
	{
    		std::cout << "Podaj " << vector.size() + 1 << ". liczbę: ";
    		std::cin >> a;
    		vector.push_back(a);
    		rozmiar = vector.size();
  	}
 	while (a != 0);

  	for (int i = 0; i < rozmiar - 1; i++) 
	{
   		for (int j = 0; j < rozmiar - 2; j++)
      			if (vector[j] > vector[j + 1])
        			std::swap(vector[j], vector[j + 1]);
  	};

  	for (int x = 0; x < rozmiar - 1; x++) 
	{
    		std::cout << vector[x] << "\n";
  	};

  	return 0;
}
