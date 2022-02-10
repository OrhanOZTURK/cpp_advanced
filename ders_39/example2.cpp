#include<string>
#include<iostream>
#include<vector>
//other include

class Student
{
public:
	Student(std::string name, std::string surname);
	void add_grade(int);
	void print()const;
private:
	std::string m_name;
	std::string m_surname;
	std::vector<int> m_grades;
	//other private members
	//other private functions
};


Student::Student(std::string name, std::string surname) : m_name{ std::move(name) }, m_surname{ std::move(surname) }
{
}
void Student::add_grade(int grade)
{
	m_grades.emplace_back(grade);
}
void Student::print()const
{
	std::cout << "name : " << m_name << "    surname : " << m_surname << '\n';
	std::cout << "grades : ";
	for (auto g : m_grades)
		std::cout << g << ' ';
	std::cout << "\n";
}


int main()
{
	Student s{ "Burak","Akman" };
	s.add_grade(12);
	s.add_grade(45);
	s.add_grade(99);
	s.print();
}
