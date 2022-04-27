#include <iostream>
#include <future>
#include <stdexcept>

int main()
{
	std::promise<int> prom;
	prom.set_value(10);
	try {
		prom.set_value(20); // exception throw
	}
	catch (const std::future_error& ex)
	{
		std::cout << "exception caught : " << ex.what() << '\n';
	}
}
