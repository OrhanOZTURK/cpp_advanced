#include "singleton.h"

#define PRIVATE
#define STATIC

STATIC Singleton& Singleton::get_instance()
{
	static Singleton instance;
	return instance;
}
PRIVATE Singleton::Singleton()
{
	//..
}


/*

STATIC Singleton& Singleton::get_instance()
{
	static Singleton *p = new Singleton;
	return *p;
}
PRIVATE MSingleaton::Singleton()
{
	//..
}

*/
