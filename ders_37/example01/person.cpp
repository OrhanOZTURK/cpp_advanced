#include "person.h"
#include "car.h"

void Person::travel()
{
	CarPtr ptr = create_car();
	ptr->start();
	ptr->run();
	ptr->stop();
}