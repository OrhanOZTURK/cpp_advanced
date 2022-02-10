#include "student.h"
#include <iostream>
#include <vector>

class Student::pimpl {
public:
	pimpl(std::string name, std::string surname) : m_name{ std::move(name) }, m_surname{ std::move(surname) }
	{

	}
	void add_grade(int grade)
	{
		m_grades.emplace_back(grade);
	}
	void print()const
	{
		std::cout << "name : " << m_name << " surname : " << m_surname << '\n';
		std::cout << "grades : ";
		for (auto g : m_grades)
			std::cout << g << ' ';
		std::cout << "\n";
	}
private:
	std::string m_name;
	std::string m_surname;
	std::vector<int> m_grades;
};

Student::~Student()
{
	std::cout << "dtor\n";
}
Student::Student(std::string name, std::string surname) :
	p{ std::make_unique<pimpl>(std::move(name),std::move(surname)) } { }

Student::Student(const Student& other) : p{ new pimpl{*other.p} } {  } 

Student& Student::operator=(const Student& other)
{
	p.reset(new pimpl{ *other.p });
	return *this;
}

Student::Student(Student&&) = default;

Student& Student::operator=(Student&&) = default;

void Student::add_grade(int grade)
{
	p->add_grade(grade);
}

void Student::print()const
{
	p->print();
}