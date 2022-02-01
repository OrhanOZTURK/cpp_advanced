#include <iostream>
#include "employee.h"
#include "bmw.h"

Employee::Employee()
{
	std::cout << "Employee nesnesi olusturuldu\n";
}

Employee::~Employee()
{
	std::cout << "Employee nesnesi yok edildi\n";
}

CarPtr Employee::create_car()
{
	return std::make_unique<Bmw>();
}
