#include "manager.h"
#include "mercedes.h"
#include <iostream>

Manager::Manager()
{
	std::cout << "Manager nesnesi olusturuldu\n";
}

Manager::~Manager()
{
	std::cout << "Manager nesnesi yok edildi\n";
}

CarPtr Manager::create_car()
{
	return std::make_unique<Mercedes>();
}
