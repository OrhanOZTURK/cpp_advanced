#include "singleton.h"
#include<mutex>

#define PRIVATE
#define STATIC
std::once_flag flag;
STATIC TSingleton& TSingleton::instance()
{
	std::call_once(flag, []() { mp_instance = new TSingleton; }); 
	return *mp_instance;
}
void TSingleton::foo()
{
}
PRIVATE TSingleton::TSingleton()
{
	//..
}
