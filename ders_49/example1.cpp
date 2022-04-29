#include <iostream>
#include <future>

void foo()
{
	std::cout << "foo called\n";
}

void func()
{
	std::cout << "func called\n";
	throw std::runtime_error{ "runtime error exception from func\n" };
}

int main()
{
	std::thread t{ foo };
	
	func();	//std::terminate

	t.join();
}
