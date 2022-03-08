#include "necstrategy.h"
#include <iostream>

NecStrategy::NecStrategy()
{
	std::cout << "Neco Strategy object created\n";
}
NecStrategy::~NecStrategy()
{
	std::cout << "Neco Strategy object destroyed\n";
}
void NecStrategy::do_algorithm()
{
	std::cout << "Neco Strategy is been used in implementation!\n";
}