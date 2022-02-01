#pragma once

#include <memory>

class Car {
public:
	virtual ~Car() = default;
	virtual void start() = 0;
	virtual void run() = 0;
	virtual void stop() = 0;
};

using CarPtr = std::unique_ptr<Car>;