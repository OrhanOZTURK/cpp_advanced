include <iostream>
#include <future>

void foo()
{
	std::cout << "foo called\n" << std::endl;
}

void func()
{
	std::cout << "func called\n" << std::endl;
	throw std::runtime_error{ "runtime error exception from func\n" };
}

int main()
{
	std::thread t{ foo };

	try {
		func();
		t.join();
	}
	catch (const std::exception& ex) {
		std::cout << "exception caught : " << ex.what() << std::endl;
		t.join();
	}
}
