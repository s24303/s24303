#include <iostream>
#include <string>
#include <vector>

std::string sudoku[9][9];
int number, level;

void menu()
{
    std::system("clear || cls"); // clear screen
    std::cout << "Hello in sudoku game! \n \n";
    std::cout << "1. PLAY \n";
    std::cout << "2. INSTRUCTION \n\n";
    std::cout << "0. EXIT \n";
    std::cout << "================= \n";
    std::cout << "What you want to do (type number of an action): ";
    std::cin >> number;
}

void lvl()
{
    std::system("clear || cls"); // clear screen
    std::cout << "Choose your level: \n \n";
    std::cout << "1. EASY \n";
    std::cout << "2. MEDIUM \n";
    std::cout << "3. HARD \n \n";
    std::cout << "0. EXIT \n";
    std::cin >> level;
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

void chceck(int int_i, int int_j, int value)
{
    for (int i = 0; i < 9; i++)
    {
        int old_value;
        sudoku[i][int_j] = old_value;
        if (old_value = value)
            std::cerr << "Wrong number! Try again.";
    }

    for (int j = 0; j < 9; j++)
    {
        int old_value;
        sudoku[int_i][j] = old_value;
        if (old_value = value)
            std::cerr << "Wrong number! Try again.";
    }
}

int main()
{
    do
    {
        menu();
    } while (number < 0 || number > 2);

    switch (number)
    {
    case 1:
        do
        {
            lvl();
        } while (level < 0 || level > 3);
        switch (level)
        {
        case 1:
        {
            easy();
            display();
            std::cout << "Which cell you want to edit? ";
            std::string cell;
            std::cin >> cell;
            auto i = cell[0];
            int int_i = i - 48;

            auto j = cell[1];
            int int_j = j - 48;

            std::cout << "Enter value: ";
            int value;
            std::cin >> value;

            std::string str_value = std::to_string(value);

            sudoku[int_i][int_j] = str_value;
            chceck(int_i, int_j, value);
            //display();

            break;
        }
        default:
            break;
        }
        break;
    default:
        break;
    }

    return 0;
}