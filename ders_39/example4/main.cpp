#include <iostream>
#include "student.h"

int main()
{
	{
		Student s{ "murat","hepeyiler" };
		s.add_grade(34);
		s.add_grade(89);
		s.add_grade(100);
		s.print();
		auto s2 = s;
		s2.print();
	}
	std::cout << "main devam ediyor\n";
}