#include "factory.h"
#include "student.h"
IStudent* create_student(std::string name, std::string surname)
{
	return new Student{ std::move(name), std::move(surname) };
}
