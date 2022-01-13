#include <iostream>
#include <string>

const char *sudoku[9][9];
char m = 0;

void menu()
{
    std::cout << "Hello in sudoku game! \n \n";
    std::cout << "1. PLAY \n";
    std::cout << "2. INSTRUCTION \n";
    std::cout << "3. EXIT \n";
    std::cout << "================= \n";
    std::cout << "What you want to do (type number of an action): ";
    std::cin >> m;
}

void easy()
{
    sudoku[0][0] = " ";
    sudoku[0][1] = " ";
    sudoku[0][2] = " ";
    sudoku[0][3] = "6";
    sudoku[0][4] = " ";
    sudoku[0][5] = " ";
    sudoku[0][6] = " ";
    sudoku[0][7] = "8";
    sudoku[0][8] = "9";
    sudoku[1][0] = "6";
    sudoku[1][1] = " ";
    sudoku[1][2] = " ";
    sudoku[1][3] = " ";
    sudoku[1][4] = " ";
    sudoku[1][5] = "1";
    sudoku[1][6] = "4";
    sudoku[1][7] = " ";
    sudoku[1][8] = " ";
    sudoku[2][0] = " ";
    sudoku[2][1] = " ";
    sudoku[2][2] = " ";
    sudoku[2][3] = "3";
    sudoku[2][4] = "8";
    sudoku[2][5] = "2";
    sudoku[2][6] = " ";
    sudoku[2][7] = "6";
    sudoku[2][8] = "7";
    sudoku[3][0] = "3";
    sudoku[3][1] = "2";
    sudoku[3][2] = " ";
    sudoku[3][3] = " ";
    sudoku[3][4] = " ";
    sudoku[3][5] = "8";
    sudoku[3][6] = " ";
    sudoku[3][7] = " ";
    sudoku[3][8] = " ";
    sudoku[4][0] = "7";
    sudoku[4][1] = " ";
    sudoku[4][2] = " ";
    sudoku[4][3] = " ";
    sudoku[4][4] = " ";
    sudoku[4][5] = " ";
    sudoku[4][6] = " ";
    sudoku[4][7] = " ";
    sudoku[4][8] = "8";
    sudoku[5][0] = " ";
    sudoku[5][1] = " ";
    sudoku[5][2] = " ";
    sudoku[5][3] = "7";
    sudoku[5][4] = " ";
    sudoku[5][5] = " ";
    sudoku[5][6] = " ";
    sudoku[5][7] = "2";
    sudoku[5][8] = "1";
    sudoku[6][0] = "8";
    sudoku[6][1] = "7";
    sudoku[6][2] = " ";
    sudoku[6][3] = "5";
    sudoku[6][4] = "6";
    sudoku[6][5] = "4";
    sudoku[6][6] = " ";
    sudoku[6][7] = " ";
    sudoku[6][8] = " ";
    sudoku[7][0] = " ";
    sudoku[7][1] = " ";
    sudoku[7][2] = "4";
    sudoku[7][3] = "1";
    sudoku[7][4] = " ";
    sudoku[7][5] = " ";
    sudoku[7][6] = " ";
    sudoku[7][7] = " ";
    sudoku[7][8] = "3";
    sudoku[8][0] = "2";
    sudoku[8][1] = "1";
    sudoku[8][2] = " ";
    sudoku[8][3] = " ";
    sudoku[8][4] = " ";
    sudoku[8][5] = "3";
    sudoku[8][6] = " ";
    sudoku[8][7] = " ";
    sudoku[8][8] = " ";
}

void display()
{
    std::cout << "===================================== \n";
    for (int i = 0; i < 9; i++)
    {
        std::cout << "|";
        for (int j = 0; j < 9; j++)
        {
            std::cout << " " << sudoku[i][j] << " |";
        }
        std::cout << "\n";
    }
    std::cout << "===================================== \n";
}

int main()
{
    do
    {
        menu();
        int im = (int)m;
        switch (im)
        {
        case 1:
            std::cout << "test";
            break;
        case 2:
            break;
        case 3:
            return 0;
            break;
        default:
            std::cerr << "Error! Wrong number, try again. \n";
            menu();
            break;
        }
    } while (m == 1 && m == 2 && m == 3);
    //easy();
    //display();
}