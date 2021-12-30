#include <iostream>

int main()
{
        int h;

        std::cout << "Podaj wysokość trójkąta: ";
        std::cin >> h;

        for (int i=h; i>=0; i--)
        {
                for (int j=0; j<i; j++)
                {
                        std::cout << "*";
                }
                std::cout << "\n";
        }

        return 0;
}







