#pragma once
#include "car.h"

class Person {
public:

	virtual ~Person() = default;

	void travel();						

	virtual CarPtr create_car() = 0;	

};