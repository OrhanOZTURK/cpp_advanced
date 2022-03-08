#pragma once

#include <memory>
class Strategy;
class Context {
public:
	Context(Strategy*);
	void do_something();
	void set_strategy(Strategy*);
private:
	std::unique_ptr<Strategy> mps;
};