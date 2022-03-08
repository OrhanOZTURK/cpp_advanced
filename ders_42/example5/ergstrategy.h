#pragma once

#include "strategy.h"
class ErgStrategy : public Strategy {
public:
	ErgStrategy();
	~ErgStrategy();
	virtual void do_algorithm()override;
};