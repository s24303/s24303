#include <array>
#include <iostream>

int main() 
{
	std::array<char, 94> ASCIItable;
	int i = 0;

	for (int x = 33; x < 127; x++)
	{
		ASCIItable[i] = x;
		i++;
	}

	for (int j = 0; j < 94; j++)
		std::cout << j+1 << ". " << ASCIItable[j] << "\n";

	return 0;
}
