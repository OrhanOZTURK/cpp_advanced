#include<iostream>
#include "student.h"
#include "renault.h"

Student::Student()
{
	std::cout << "Student nesnesi olusturuldu\n";
}

Student::~Student()
{
	std::cout << "Student nesnesi yok edildi\n";
}

CarPtr Student::create_car()
{
	return std::make_unique<Renault>();
}