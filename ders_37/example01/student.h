#pragma once

#include "person.h"

class Student : public Person {
public:
	Student();
	~Student();
	virtual CarPtr create_car()override;
};
