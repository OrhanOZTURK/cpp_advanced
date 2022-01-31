#include "singleton.h"

Singleton Singleton::instance;
Singleton& Singleton::get_instance()
{
	return instance;
}
Singleton::Singleton()
{
	//..
}
Singleton::~Singleton()
{
	//..
}
void Singleton::foo()
{
	//..
}
