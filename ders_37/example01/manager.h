#pragma once

#include "person.h"

class Manager : public Person {
public:
	Manager();
	~Manager();
	virtual CarPtr create_car()override;
};

