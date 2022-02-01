#pragma once

#include "car.h"

class Mercedes : public Car {
public:
	Mercedes();
	~Mercedes();
	virtual void start()override;
	virtual void run()override;
	virtual void stop()override;
};
