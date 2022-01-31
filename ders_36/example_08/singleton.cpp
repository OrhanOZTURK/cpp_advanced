#include "singleton.h"
#include<mutex>

#define PRIVATE
#define STATIC
std::once_flag flag;

STATIC Singleton& Singleton::instance()
{
	std::call_once(flag, []() { mp_instance = new Singleton; });
	return *mp_instance;
}
void Singleton::foo()
{
}
PRIVATE Singleton::Singleton()
{
	//..
}
