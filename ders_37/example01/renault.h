#pragma once

#include "car.h"

class Renault : public Car {
public:
	Renault();
	~Renault();
	virtual void start()override;
	virtual void run()override;
	virtual void stop()override;
};
