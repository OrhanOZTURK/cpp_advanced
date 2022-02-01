#ifndef BMW_H
#define BMW_H
#include "car.h"

class Bmw : public Car
{
public:
	Bmw();
	~Bmw();
	virtual void start()override;
	void run()override;
	void stop()override;
};

#endif