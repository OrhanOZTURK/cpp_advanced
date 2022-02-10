#include "student.h"
#include <iostream>

void Student::add_grade(int grade)
{
	m_grades.emplace_back(grade);
}

void Student::print() const
{
	std::cout << "name : " << m_name << " surname : " << m_surname << '\n';
	std::cout << "grades : ";
	for (auto g : m_grades)
		std::cout << g << ' ';
	std::cout << "\n";
}
