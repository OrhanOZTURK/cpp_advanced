#pragma once

#include "person.h"

class Employee : public Person
{
public:
	Employee();
	~Employee();
	virtual CarPtr create_car()override;
};