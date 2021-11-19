#include <iostream>

void border()
{
	for (int b = 0; b < 50; b++)
		std::cout << "-";

	std::cout << "\n";
}

void line_a()
{
	for (int j = 0; j < 2; j++)
	{
		std::cout << "|";
		for (int i = 0; i < 8; i++)
		{
			for (int w = 0; w < 3; w++)
				std::cout << " ";
			for (int b = 0; b < 3; b++)
				std::cout << "*";
		}
		std::cout << "| \n";
	}
}

void line_b()
{
        for (int j = 0; j < 2; j++)
        {
		std::cout << "|";
                for (int i = 0; i < 8; i++)
                {
                        for (int b = 0; b < 3; b++)
                                std::cout << "*";
                        for (int w = 0; w < 3; w++)
                                std::cout << " ";
                }
                std::cout << "| \n";
        }
}

void board()
{
	border();
	for (int l = 0; l < 4; l++)
	{
		line_a();
		line_b();
	}
	border();
}

int main()
{
	board();

	return 0;
}
