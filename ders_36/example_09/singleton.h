#pragma once

#define PRIVATE
#define STATIC

#include<iostream>
#include<memory>

class Singleton {
private:
	struct Deleter {
		void operator()(Singleton* p);
	};

	inline static std::unique_ptr<Singleton, Deleter> mp_instance;
	Singleton();
	~Singleton();
public:
	static Singleton& get_instance();
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	void foo();
};

void Singleton::Deleter::operator()(Singleton* p)
{
	delete p;
}
PRIVATE Singleton::Singleton()
{
	//..
}
Singleton::~Singleton()
{
	std::cout << "destructor caled\n";
}
STATIC Singleton& Singleton::get_instance()
{
	if (!mp_instance)
	{
		mp_instance.reset(new Singleton);
	}
	return *mp_instance;
}
void Singleton::foo()
{

}
