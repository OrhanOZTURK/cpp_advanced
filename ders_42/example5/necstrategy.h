#pragma once

#include "strategy.h"
class NecStrategy : public Strategy {
public:
	NecStrategy();
	~NecStrategy();
	virtual void do_algorithm()override;
};