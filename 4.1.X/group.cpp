#include <string>
#include <iostream>
#include <vector>

struct student
{
    int id;
    std::string name;
    std::string surname;
    std::vector<double> grades;
};

struct group
{
    std::string name;
    std::vector<student> students;
};

void addStudentToGroup(group, std::vector<student> students);

int main()
{
    std::vector<student> students;
    std::vector<group> groups;

    auto stud1 = student{1, "Adam", "Mickiewicz", {2, 3, 4, 1}};
    auto stud2 = student{2, "Jan", "Kochanowski", {2, 1, 1, 6}};
    auto stud3 = student{3, "Alex", "Ferguson", {6, 4, 1, 2}};

    students.push_back(stud1);
    students.push_back(stud2);
    students.push_back(stud3);

    auto group1 = group{"4C", {stud1}};
    auto group2 = group{"1A", {stud3}};

    groups.push_back(group1);
    groups.push_back(group2);

    addStudentToGroup(group2, students);

    return 0;
}

void addStudentToGroup(group, std::vector<student> students)
{
    int x;

    for (auto student : students)
    {

        std::cout << student.id << ". " << student.name << " " << student.surname << " ";
        for (auto i = 0; i < (int)student.grades.size(); i++)
            std::cout << student.grades[i];
        std::cout << "\n";
    }
    std::cout << "\nChoose student to add into a group: \n";
    std::cin >> x;

    if (x <= students.size())
    {
        switch (x)
        case 1:
        {
                }
    }
    else
        std::cerr << "Error! No matching student!";
}