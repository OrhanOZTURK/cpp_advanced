#pragma once


#include<string>
#include<memory>
class Student
{
public:
	Student(std::string name, std::string surname);
	Student(const Student&);
	Student& operator=(const Student&);

	Student(Student&&);
	Student& operator=(Student&&);

	~Student();

	void add_grade(int);
	virtual void print()const;
private:
	class pimpl;
	std::unique_ptr<pimpl>p;  
							  
								
								
								

};