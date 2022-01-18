#include <iostream>
#include <string>

std::string sudoku[9][9];
int number, level;
bool finished = false, check = false, check_v = false, check_h = false;
int int_j, int_i, value;
std::string str_value, cell, num, lvl;

void menu() //menu
{
    std::system("clear || cls"); // clear screen
    std::cout << "Hello in sudoku game! \n \n"
              << "1. PLAY \n"
              << "2. INSTRUCTION \n\n"
              << "0. EXIT \n"
              << "================= \n"
              << "What you want to do (type number of an action): ";
    std::cin >> num;
}
void lvl_menu() //choose level of difficulty
{
    std::system("clear || cls"); // clear screen
    std::cout << "Choose your level: \n \n"
              << "1. EASY \n"
              << "2. MEDIUM \n"
              << "3. HARD \n \n"
              << "0. BACK \n";
    std::cin >> lvl;
}
void instruction() // display an instruction
{
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
void easy_lvl() //easy-level sudoku declaration
{
    sudoku[9][9] = {" ", " ", ""};
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
void easy_hint() //user can't change hints
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
void medium_lvl() //medium-level sudoku declaration
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
void medium_hint() //user can't change hints
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
void hard_lvl() //hard-level sudoku declaration
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
void hard_hint() //user can't change hints
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
void display() //look for sudoku
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
void insert_number() //filling sudoku
{
    std::cout << "Give me cell address and value: ";
    std::cin >> cell;
    auto int_i = cell[1] - 49;
    auto int_j = cell[0] - 65;
    auto value = cell[2] - 48;

    str_value = std::to_string(value);
}
void is_finished() //checking that sudoku is finished
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
void try_number() //checking inserted num,
{
    check = 1;
    for (int i = 0; i < 9; i++)
    {
        std::string old_value = (sudoku[i][int_j]);
        if (str_value == old_value)
        {
            check = 0;
            break;
        }
    }
    for (int j = 0; j < 9; j++)
    {
        std::string old_value = (sudoku[int_i][j]);
        if (str_value == old_value)
        {
            check = 0;
            break;
        }
    }
    if (value > 0 && value < 10)
        check_v = 1;
    else
        check_v = 0;
}

int main()
{
back:
    do
    {
        menu();
        if (num.size() > 1)
            goto back;
        number = num[0] - 48;
    } while (number < 0 || number > 2);
    switch (number)
    {
    case 1:
    back_lvl:
        do
        {
            lvl_menu();
            if (lvl.size() > 1)
                goto back_lvl;
            level = lvl[0] - 48;
        } while (level < 0 || level > 3);
        switch (level)
        {
        case 1:
            easy_lvl();
            display();
            is_finished();
            while (finished == 0)
            {
                insert_number();
                if (cell == "0")
                    goto back_lvl;
                else
                {
                    try_number();
                    easy_hint();
                    if (check == 0 || check_v == 0 || check_h == 0)
                    {
                        display();
                        std::cerr << "Error! Wrong number, try again. \n";
                    }
                    else
                    {
                        sudoku[int_i][int_j] = str_value;
                        display();
                    };
                    continue;
                    is_finished();
                }
                display();
                std::cout << "Congratulations! You have just finished sudoku! \n";
            }
            break;
        case 2:
            medium_lvl();
            display();
            is_finished();
            while (finished == 0)
            {
                insert_number();
                if (cell == "0")
                    goto back_lvl;
                else
                {
                    try_number();
                    medium_hint();
                    if (check == 0 || check_v == 0 || check_h == 0)
                    {
                        display();
                        std::cerr << "Error! Wrong number, try again. \n";
                    }
                    else
                    {
                        sudoku[int_i][int_j] = str_value;
                        display();
                    };
                    continue;
                    is_finished();
                }
            }
            display();
            std::cout << "Congratulations! You have just finished sudoku! \n";
            break;
        case 3:
            hard_lvl();
            display();
            is_finished();
            while (finished == 0)
            {
                insert_number();
                if (cell == "0")
                    goto back_lvl;
                else
                {
                    try_number();
                    hard_hint();
                    if (check == 0 || check_v == 0 || check_h == 0)
                    {
                        display();
                        std::cerr << "Error! Wrong number, try again. \n";
                    }
                    else
                    {
                        sudoku[int_i][int_j] = str_value;
                        display();
                    };
                    continue;
                    is_finished();
                }
            }
            display();
            std::cout << "Congratulations! You have just finished sudoku! \n";
            break;
        case 0:
            goto back;
            break;
        }
        break;
    case 2:
        int exit_button;
    stay:
        instruction();
        std::cin >> exit_button;
        if (exit_button == 0)
            goto back;
        else
            goto stay;
        break;
    case 0:
        exit(0);
        break;
    }
    return 0;
}