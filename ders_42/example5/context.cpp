#include "context.h"
#include "strategy.h"
#include <iostream>

Context::Context(Strategy* p) : mps{ p }
{
}
void Context::do_something()
{
	std::cout << "context is doing something as per its buseiness logic\n";
	mps->do_algorithm();
}
void Context::set_strategy(Strategy* p)
{
	mps.reset(p);
}