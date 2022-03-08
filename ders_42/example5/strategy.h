#pragma once

class Strategy {
public:
	virtual ~Strategy() = default;
	virtual void do_algorithm() = 0;
};
