#include <iostream>
#include "necstrategy.h"
#include "ergstrategy.h"
#include "context.h"

int main()
{
	Context c{ new NecStrategy };
	c.do_something();
	std::cout << '\n';
	
	c.set_strategy(new ErgStrategy);
	c.do_something();
}

OUTPUT
------
Neco Strategy object created
context is doing something as per its buseiness logic
Neco Strategy is been used in implementation!

Ergin Strategy object created
Neco Strategy object destroyed
context is doing something as per its buseiness logic
Ergin Strategy is been used in implementation!
Ergin Strategy object destroyed