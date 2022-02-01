#include "renault.h"
#include <iostream>

Renault::Renault()
{
	std::cout << "Renault olusturuldu\n";
}
Renault::~Renault()
{
	std::cout << "Renault yok edildi\n";
}
void Renault::start()
{
	std::cout << "Renault has started!\n";
}
void Renault::run()
{
	std::cout << "Renault is running!\n";
}
void Renault::stop()
{
	std::cout << "Renault has stopped!\n";
}
