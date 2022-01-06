#include <iostream>
#include <string>
#include <vector>

struct student
{
        std::string name;
        std::string surname;
        std::vector<double> grades;
};

void average_of(std::vector<student> students);
void get_best_student(std::vector<student> students);

int main()
{
        std::vector<student> students;

        auto stud1 = student{"Adam", "Mickiewicz", {2, 3, 4, 1}};
        auto stud2 = student{"Jan", "Kochanowski", {2, 1, 1, 6}};
        auto stud3 = student{"Alex", "Ferguson", {6, 4, 1, 2}};

        students.push_back(stud1);
        students.push_back(stud2);
        students.push_back(stud3);

        average_of(students);
        get_best_student(students);

        return 0;
}

void average_of(std::vector<student> students)
{
        double avg = 1, sum = 0;

        for (auto student : students)
        {
                for (auto i = 0; i < (int)student.grades.size(); i++)
                        sum += student.grades[i];
                avg = sum / (int)student.grades.size();
                std::cout << student.name << "'s GPA is " << avg << "\n";
                sum = 0, avg = 0;
        }
}

void get_best_student(std::vector<student> students)
{
        double avg = 1, sum = 0, best = 0;
        std::string best_stud;

        for (auto student : students)
        {
                for (auto i = 0; i < (int)student.grades.size(); i++)
                        sum += student.grades[i];
                avg = sum / (int)student.grades.size();
                if (avg > best)
                {
                        best = avg;
                        best_stud = student.name + " " + student.surname;
                }
                sum = 0, avg = 0;
        }
        std::cout << best_stud << " is the best student with GPA = " << best << "\n";
}