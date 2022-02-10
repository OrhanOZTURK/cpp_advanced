#pragma once

#include "istudent.h"
class Student : public IStudent
{
public:
	Student(std::string name, std::string surname) : m_name{ std::move(name) }, m_surname{ std::move(surname) }
	{

	}
	void add_grade(int)override;
	virtual void print()const override;
private:
	std::string m_name;
	std::string m_surname;
	std::vector<int> m_grades;
	//other private members
	//other private functions
};
