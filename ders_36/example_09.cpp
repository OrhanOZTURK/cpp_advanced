#pragma once

#define PRIVATE
#define STATIC

#include<iostream>
#include<memory>

class USingleton {
private:
	struct Deleter {
		void operator()(USingleton* p);
	};

	inline static std::unique_ptr<USingleton, Deleter> mp_instance; 
	USingleton();
	~USingleton();
public:
	static USingleton& get_instance();
	USingleton(const USingleton&) = delete;
	USingleton& operator=(const USingleton&) = delete;
	void foo();
};

void USingleton::Deleter::operator()(USingleton* p)
{
	delete p;
}
PRIVATE USingleton::USingleton()
{
	//..
}
USingleton::~USingleton()
{
	std::cout << "destructor caled\n";
}
STATIC USingleton& USingleton::get_instance()
{
	if (!mp_instance)
	{
		mp_instance.reset(new USingleton); 
	}
	return *mp_instance;
}
void USingleton::foo()
{

}
