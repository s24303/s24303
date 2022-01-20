#include <iostream>
#include <string>
#include <unistd.h>

std::string sudoku[9][9], val, cell;
bool finished, check, check_h;
int int_i;

auto menu() -> int //menu
{
    std::string num;
    int number;

    do
    {
        std::system("clear || cls"); // clear screen
        std::cout << "Hello in sudoku game! \n \n"
                  << "1. PLAY \n"
                  << "2. INSTRUCTION \n\n"
                  << "0. EXIT \n"
                  << "================= \n"
                  << "What you want to do (type number of an action): ";
        std::cin >> num;
        number = num[0] - 48;
    } while (number < 0 || number > 2 || num.size() > 1);

    return number;
}
auto lvl_menu() -> int //choose level of difficulty
{
    std::string lvl;
    int level;

    do
    {
        std::system("clear || cls"); // clear screen
        std::cout << "Choose your level: \n \n"
                  << "1. EASY \n"
                  << "2. MEDIUM \n"
                  << "3. HARD \n \n"
                  << "0. BACK \n";
        std::cin >> lvl;
        level = lvl[0] - 48;
    } while (level < 0 || level > 3 || lvl.size() > 1);

    return level;
}
auto instruction() -> void // display an instruction
{
    std::string go;

    std::system("clear || cls"); // clear screen
    std::cout << "1. Only use the numbers 1 to 9, \n"
              << "2. Avoid trying to guess the solution to the puzzle, \n"
              << "3. Only use each number once in each row, column, & grid, \n"
              << "4. Use the process of elimination as a tactic. \n \n"
              << "================================================== \n"
              << "How to play? \n"
              << "As first choose which cell you want to edit and value of it, \n"
              << "type it in format: \"A43\". \n"
              << "and keep going till finish. \n"
              << "Good luck! \n \n"
              << "(insert 0 to go back) \n";
}
auto easy_lvl() -> void //easy-level sudoku declaration
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
auto easy_hint(int int_i, int int_j) -> void //user can't change hints
{
    if (int_i == 0 && int_j == 3)
        check_h = 0;
    else if (int_i == 0 && int_j == 7)
        check_h = 0;
    else if (int_i == 0 && int_j == 8)
        check_h = 0;
    else if (int_i == 1 && int_j == 0)
        check_h = 0;
    else if (int_i == 1 && int_j == 5)
        check_h = 0;
    else if (int_i == 1 && int_j == 6)
        check_h = 0;
    else if (int_i == 2 && int_j == 3)
        check_h = 0;
    else if (int_i == 2 && int_j == 4)
        check_h = 0;
    else if (int_i == 2 && int_j == 5)
        check_h = 0;
    else if (int_i == 2 && int_j == 7)
        check_h = 0;
    else if (int_i == 2 && int_j == 8)
        check_h = 0;
    else if (int_i == 3 && int_j == 0)
        check_h = 0;
    else if (int_i == 3 && int_j == 1)
        check_h = 0;
    else if (int_i == 3 && int_j == 5)
        check_h = 0;
    else if (int_i == 4 && int_j == 0)
        check_h = 0;
    else if (int_i == 4 && int_j == 8)
        check_h = 0;
    else if (int_i == 5 && int_j == 3)
        check_h = 0;
    else if (int_i == 5 && int_j == 7)
        check_h = 0;
    else if (int_i == 5 && int_j == 8)
        check_h = 0;
    else if (int_i == 6 && int_j == 0)
        check_h = 0;
    else if (int_i == 6 && int_j == 1)
        check_h = 0;
    else if (int_i == 6 && int_j == 3)
        check_h = 0;
    else if (int_i == 6 && int_j == 4)
        check_h = 0;
    else if (int_i == 6 && int_j == 5)
        check_h = 0;
    else if (int_i == 7 && int_j == 2)
        check_h = 0;
    else if (int_i == 7 && int_j == 3)
        check_h = 0;
    else if (int_i == 7 && int_j == 8)
        check_h = 0;
    else if (int_i == 8 && int_j == 0)
        check_h = 0;
    else if (int_i == 8 && int_j == 1)
        check_h = 0;
    else if (int_i == 8 && int_j == 5)
        check_h = 0;
    else
        check_h = 1;
}
auto medium_lvl() -> void //medium-level sudoku declaration
{
    sudoku[0][0] = "2";
    sudoku[0][1] = " ";
    sudoku[0][2] = " ";
    sudoku[0][3] = " ";
    sudoku[0][4] = " ";
    sudoku[0][5] = " ";
    sudoku[0][6] = "5";
    sudoku[0][7] = "8";
    sudoku[0][8] = " ";
    sudoku[1][0] = " ";
    sudoku[1][1] = " ";
    sudoku[1][2] = "4";
    sudoku[1][3] = " ";
    sudoku[1][4] = " ";
    sudoku[1][5] = "8";
    sudoku[1][6] = " ";
    sudoku[1][7] = " ";
    sudoku[1][8] = " ";
    sudoku[2][0] = " ";
    sudoku[2][1] = "1";
    sudoku[2][2] = " ";
    sudoku[2][3] = "5";
    sudoku[2][4] = "7";
    sudoku[2][5] = " ";
    sudoku[2][6] = " ";
    sudoku[2][7] = " ";
    sudoku[2][8] = "4";
    sudoku[3][0] = " ";
    sudoku[3][1] = "4";
    sudoku[3][2] = " ";
    sudoku[3][3] = " ";
    sudoku[3][4] = " ";
    sudoku[3][5] = "3";
    sudoku[3][6] = "1";
    sudoku[3][7] = " ";
    sudoku[3][8] = " ";
    sudoku[4][0] = " ";
    sudoku[4][1] = " ";
    sudoku[4][2] = "7";
    sudoku[4][3] = "6";
    sudoku[4][4] = "9";
    sudoku[4][5] = "2";
    sudoku[4][6] = "4";
    sudoku[4][7] = " ";
    sudoku[4][8] = " ";
    sudoku[5][0] = " ";
    sudoku[5][1] = " ";
    sudoku[5][2] = "3";
    sudoku[5][3] = "4";
    sudoku[5][4] = " ";
    sudoku[5][5] = " ";
    sudoku[5][6] = " ";
    sudoku[5][7] = "7";
    sudoku[5][8] = " ";
    sudoku[6][0] = "8";
    sudoku[6][1] = " ";
    sudoku[6][2] = " ";
    sudoku[6][3] = " ";
    sudoku[6][4] = "4";
    sudoku[6][5] = "5";
    sudoku[6][6] = " ";
    sudoku[6][7] = "6";
    sudoku[6][8] = " ";
    sudoku[7][0] = " ";
    sudoku[7][1] = " ";
    sudoku[7][2] = " ";
    sudoku[7][3] = "1";
    sudoku[7][4] = " ";
    sudoku[7][5] = " ";
    sudoku[7][6] = "2";
    sudoku[7][7] = " ";
    sudoku[7][8] = " ";
    sudoku[8][0] = " ";
    sudoku[8][1] = "3";
    sudoku[8][2] = "6";
    sudoku[8][3] = " ";
    sudoku[8][4] = " ";
    sudoku[8][5] = " ";
    sudoku[8][6] = " ";
    sudoku[8][7] = " ";
    sudoku[8][8] = "5";
}
auto medium_hint(int int_i, int int_j) -> void //user can't change hints
{
    if (int_i == 0 && int_j == 0)
        check_h = 0;
    else if (int_i == 0 && int_j == 6)
        check_h = 0;
    else if (int_i == 0 && int_j == 7)
        check_h = 0;
    else if (int_i == 1 && int_j == 2)
        check_h = 0;
    else if (int_i == 1 && int_j == 5)
        check_h = 0;
    else if (int_i == 2 && int_j == 1)
        check_h = 0;
    else if (int_i == 2 && int_j == 3)
        check_h = 0;
    else if (int_i == 2 && int_j == 4)
        check_h = 0;
    else if (int_i == 2 && int_j == 8)
        check_h = 0;
    else if (int_i == 3 && int_j == 1)
        check_h = 0;
    else if (int_i == 3 && int_j == 5)
        check_h = 0;
    else if (int_i == 3 && int_j == 6)
        check_h = 0;
    else if (int_i == 4 && int_j == 2)
        check_h = 0;
    else if (int_i == 4 && int_j == 3)
        check_h = 0;
    else if (int_i == 4 && int_j == 4)
        check_h = 0;
    else if (int_i == 4 && int_j == 5)
        check_h = 0;
    else if (int_i == 4 && int_j == 6)
        check_h = 0;
    else if (int_i == 5 && int_j == 2)
        check_h = 0;
    else if (int_i == 5 && int_j == 3)
        check_h = 0;
    else if (int_i == 5 && int_j == 7)
        check_h = 0;
    else if (int_i == 6 && int_j == 0)
        check_h = 0;
    else if (int_i == 6 && int_j == 4)
        check_h = 0;
    else if (int_i == 6 && int_j == 5)
        check_h = 0;
    else if (int_i == 6 && int_j == 7)
        check_h = 0;
    else if (int_i == 7 && int_j == 3)
        check_h = 0;
    else if (int_i == 7 && int_j == 6)
        check_h = 0;
    else if (int_i == 8 && int_j == 1)
        check_h = 0;
    else if (int_i == 8 && int_j == 2)
        check_h = 0;
    else if (int_i == 8 && int_j == 8)
        check_h = 0;
    else
        check_h = 1;
}
auto hard_lvl() -> void //hard-level sudoku declaration
{
    sudoku[0][0] = " ";
    sudoku[0][1] = " ";
    sudoku[0][2] = "5";
    sudoku[0][3] = "9";
    sudoku[0][4] = " ";
    sudoku[0][5] = "1";
    sudoku[0][6] = " ";
    sudoku[0][7] = " ";
    sudoku[0][8] = " ";
    sudoku[1][0] = " ";
    sudoku[1][1] = " ";
    sudoku[1][2] = " ";
    sudoku[1][3] = " ";
    sudoku[1][4] = "3";
    sudoku[1][5] = " ";
    sudoku[1][6] = " ";
    sudoku[1][7] = " ";
    sudoku[1][8] = " ";
    sudoku[2][0] = " ";
    sudoku[2][1] = "3";
    sudoku[2][2] = " ";
    sudoku[2][3] = "2";
    sudoku[2][4] = " ";
    sudoku[2][5] = "4";
    sudoku[2][6] = " ";
    sudoku[2][7] = "7";
    sudoku[2][8] = " ";
    sudoku[3][0] = "3";
    sudoku[3][1] = " ";
    sudoku[3][2] = "9";
    sudoku[3][3] = "6";
    sudoku[3][4] = " ";
    sudoku[3][5] = " ";
    sudoku[3][6] = "7";
    sudoku[3][7] = " ";
    sudoku[3][8] = "1";
    sudoku[4][0] = " ";
    sudoku[4][1] = "8";
    sudoku[4][2] = " ";
    sudoku[4][3] = "5";
    sudoku[4][4] = " ";
    sudoku[4][5] = "7";
    sudoku[4][6] = " ";
    sudoku[4][7] = "9";
    sudoku[4][8] = " ";
    sudoku[5][0] = "2";
    sudoku[5][1] = " ";
    sudoku[5][2] = "1";
    sudoku[5][3] = " ";
    sudoku[5][4] = " ";
    sudoku[5][5] = "9";
    sudoku[5][6] = "8";
    sudoku[5][7] = " ";
    sudoku[5][8] = "6";
    sudoku[6][0] = " ";
    sudoku[6][1] = " ";
    sudoku[6][2] = " ";
    sudoku[6][3] = "1";
    sudoku[6][4] = " ";
    sudoku[6][5] = "2";
    sudoku[6][6] = " ";
    sudoku[6][7] = " ";
    sudoku[6][8] = "4";
    sudoku[7][0] = " ";
    sudoku[7][1] = " ";
    sudoku[7][2] = "8";
    sudoku[7][3] = " ";
    sudoku[7][4] = "9";
    sudoku[7][5] = " ";
    sudoku[7][6] = "3";
    sudoku[7][7] = " ";
    sudoku[7][8] = " ";
    sudoku[8][0] = " ";
    sudoku[8][1] = " ";
    sudoku[8][2] = " ";
    sudoku[8][3] = "4";
    sudoku[8][4] = " ";
    sudoku[8][5] = "3";
    sudoku[8][6] = " ";
    sudoku[8][7] = " ";
    sudoku[8][8] = " ";
}
auto hard_hint(int int_i, int int_j) -> void //user can't change hints
{
    if (int_i == 0 && int_j == 2)
        check_h = 0;
    else if (int_i == 0 && int_j == 3)
        check_h = 0;
    else if (int_i == 0 && int_j == 5)
        check_h = 0;
    else if (int_i == 1 && int_j == 4)
        check_h = 0;
    else if (int_i == 2 && int_j == 1)
        check_h = 0;
    else if (int_i == 2 && int_j == 3)
        check_h = 0;
    else if (int_i == 2 && int_j == 5)
        check_h = 0;
    else if (int_i == 2 && int_j == 7)
        check_h = 0;
    else if (int_i == 3 && int_j == 0)
        check_h = 0;
    else if (int_i == 3 && int_j == 2)
        check_h = 0;
    else if (int_i == 3 && int_j == 3)
        check_h = 0;
    else if (int_i == 3 && int_j == 6)
        check_h = 0;
    else if (int_i == 3 && int_j == 8)
        check_h = 0;
    else if (int_i == 4 && int_j == 1)
        check_h = 0;
    else if (int_i == 4 && int_j == 3)
        check_h = 0;
    else if (int_i == 4 && int_j == 5)
        check_h = 0;
    else if (int_i == 4 && int_j == 7)
        check_h = 0;
    else if (int_i == 5 && int_j == 0)
        check_h = 0;
    else if (int_i == 5 && int_j == 2)
        check_h = 0;
    else if (int_i == 5 && int_j == 5)
        check_h = 0;
    else if (int_i == 5 && int_j == 6)
        check_h = 0;
    else if (int_i == 5 && int_j == 8)
        check_h = 0;
    else if (int_i == 6 && int_j == 3)
        check_h = 0;
    else if (int_i == 6 && int_j == 5)
        check_h = 0;
    else if (int_i == 6 && int_j == 8)
        check_h = 0;
    else if (int_i == 7 && int_j == 2)
        check_h = 0;
    else if (int_i == 7 && int_j == 4)
        check_h = 0;
    else if (int_i == 7 && int_j == 6)
        check_h = 0;
    else if (int_i == 8 && int_j == 3)
        check_h = 0;
    else if (int_i == 8 && int_j == 5)
        check_h = 0;
    else
        check_h = 1;
}
auto display() -> void //look for sudoku
{
    std::system("clear || cls"); // clear screen
    std::cout << "    A   B   C   D   E   F   G   H   I \n"
              << "  ===================================== \n";
    for (int i = 0; i < 9; i++)
    {
        std::cout << i + 1 << " |";
        for (int j = 0; j < 9; j++)
            std::cout << " " << sudoku[i][j] << " |";
        std::cout << "\n";
    }
    std::cout << "  ===================================== \n";
}
auto is_finished() -> void //checking that sudoku is finished
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            std::string val = " ";
            if (val == sudoku[i][j]) //is cell filled with a number?
            {
                finished = 0;
                goto b;
            }
            else if (val != sudoku[i][j])
                finished = 1;
        }
    }
b:
    std::cout << "\n";
}
auto try_number(int int_i, int int_j, std::string value) -> void //checking inserted num,
{
    check = 1;
    for (int i = 0; i < 9; i++)
    {
        std::string old_value = (sudoku[i][int_j]);
        if (value == old_value)
        {
            check = 0;
            break;
        }
    }
    for (int j = 0; j < 9; j++)
    {
        std::string old_value = (sudoku[int_i][j]);
        if (value == old_value)
        {
            check = 0;
            break;
        }
    }
}
auto insert_number(int level) -> void //filling sudoku
{
    std::string cell;

    std::cout << "Give me cell address and value (type 0 to exit):";
    std::cin >> cell;
    if (cell != "0")
    {
        int int_i = cell[1] - 49;
        int int_j = cell[0];
        if (int_j > 64 && int_j < 74)
            int_j = int_j - 65;
        else if (int_j > 96 && int_j < 106)
            int_j = int_j - 97;
        else
            std::cerr << "Error! Wrong cell letter.";
        int val = cell[2] - 48;

        std::string value = std::to_string(val);
        try_number(int_i, int_j, value);

        switch (level)
        {
        case 1:
            easy_hint(int_i, int_j);
            break;
        case 2:
            medium_hint(int_i, int_j);
            break;
        case 3:
            medium_hint(int_i, int_j);
            break;
        }
        if (check == 1 && check_h == 1)
            sudoku[int_i][int_j] = value;
        else
        {
            std::cout << "Wrong number! Try again.";
            usleep(750000); //freeze screen for
        }
    }
    else
        exit(0);
}
auto sudoku_finished() -> void //let know user that he gave finshed
{
    display();
    std::cout << "Congratulations! You have just finished sudoku! \n";
}

int main()
{
back:
    auto select{menu()};

    switch (select)
    {
    case 1:
    {
        auto level{lvl_menu()};

        switch (level)
        {
        case 1:
            easy_lvl();
            display();
            is_finished();
            do
            {
                insert_number(level);
                display();
            } while (finished == 0);
            sudoku_finished();
            break;
        case 2:
            medium_lvl();
            display();
            is_finished();
            do
            {
                insert_number(level);
                display();
            } while (finished == 0);
            sudoku_finished();
            break;
        case 3:
            hard_lvl();
            display();
            is_finished();
            do
            {
                insert_number(level);
                display();
            } while (finished == 0);
            sudoku_finished();
            break;
        case 0:
            goto back;
            break;
        }
        break;
    }
    case 2:
    {
        std::string exit_button;
    stay:
        instruction();
        std::cin >> exit_button;
        if (exit_button == "0")
            goto back;
        else
            goto stay;
        break;
        return 0;
    }
    }
}