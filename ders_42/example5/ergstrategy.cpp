#include "ergstrategy.h"
#include <iostream>

ErgStrategy::ErgStrategy()
{
	std::cout << "Ergin Strategy object created\n";
}
ErgStrategy::~ErgStrategy()
{
	std::cout << "Ergin Strategy object destroyed\n";
}
void ErgStrategy::do_algorithm()
{
	std::cout << "Ergin Strategy is been used in implementation!\n";
}