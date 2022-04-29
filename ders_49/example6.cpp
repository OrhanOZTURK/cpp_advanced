#include <iostream>
#include <future>
#include <thread>

std::exception_ptr eptr{nullptr};

void foo()
{
	try {
		throw std::runtime_error{ "error from foo\n" };
	}
	catch (...)
	{
		eptr = std::current_exception();
	}
}


int main()
{
	std::thread t{ foo };
	t.join();

	try
	{
		if (eptr)
		{
			std::cout << "exception gonderilmis\n";
			std::rethrow_exception(eptr);
		}
		else
		{
			std::cout << "exception gonderilmemis\n";
		}
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << '\n';
	}
}
