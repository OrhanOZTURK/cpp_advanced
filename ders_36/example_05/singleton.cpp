#include "singleton.h"

#define PRIVATE
#define STATIC

PRIVATE Singleton::Singleton()
{
	if (!p_instance)
		p_instance = new Singleton;
}

PRIVATE void Singleton::foo_impl()
{
	//...
}

STATIC void Singleton::foo()
{
	p_instance->foo_impl();
}
