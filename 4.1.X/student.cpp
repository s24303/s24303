#include <iostream>
#include <string>
#include <vector>

struct student
{
	std::string name;
	std::string surname;
	std::vector <double> grades;
};

void students()
{
	auto stud1 = student {"Adam", "Mickiewicz", {2,3,4,1}};
	auto stud2 = student {"Jan", "Kochanowski", {4,1,5,3}};
	auto stud3 = student {"Alex", "Ferguson", {2,4,1,2}};
	auto students = std::vector<student>();
       	students.push_back(stud1);
       	students.push_back(stud2);
       	students.push_back(stud3);

	for (auto student : students)
        {
               	std::cout << student.name << " " << student.surname << " ";
               	for (auto i = 0; i < (int)student.grades.size(); i++)
                	std::cout << student.grades[i] << " ";
		std::cout << "\n";
        }

}

void average_of()
{
	double avg = 1, sum = 0;

	auto stud1 = student {"Adam", "Mickiewicz", {2,3,4,1}};
        auto stud2 = student {"Jan", "Kochanowski", {4,1,5,3}};
        auto stud3 = student {"Alex", "Ferguson", {2,4,1,2}};
        auto students = std::vector<student>();
        students.push_back(stud1);
        students.push_back(stud2);
        students.push_back(stud3);

	for (auto student : students)
        {
                for (auto i = 0; i < (int)student.grades.size(); i++)
                        sum += student.grades[i];
                avg = sum/(int)student.grades.size();
		std::cout << "Średnia ucznia " << student.name << " wynosi: " << avg << "\n";
		sum = 0, avg = 0;
        }
}

void get_best_student()
{
	double avg = 1, sum = 0;

        auto stud1 = student {"Adam", "Mickiewicz", {2,3,4,1}};
        auto stud2 = student {"Jan", "Kochanowski", {4,1,5,3}};
        auto stud3 = student {"Alex", "Ferguson", {2,4,1,2}};
        auto students = std::vector<student>();
        students.push_back(stud1);
        students.push_back(stud2);
        students.push_back(stud3);

        for (auto student : students)
        {
                for (auto i = 0; i < (int)student.grades.size(); i++)
                        sum += student.grades[i];
                avg = sum/(int)student.grades.size();
                
                sum = 0, avg = 0;
        }

}

int main()
{
	students();
	average_of();

	return 0;
}
