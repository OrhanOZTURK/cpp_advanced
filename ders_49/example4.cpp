#include <iostream>
#include <future>

void func()
{
	std::cout << "func cagrildi\n";
	try
	{
		throw std::runtime_error{ "error from func\n" };
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << '\n';
	}
}

void my_terminate()
{
	std::cout << "My terminate called\n";
	abort();
}

int main()
{
	set_terminate(my_terminate);

	try {
		std::thread t{ func };  // Hata yakalandı
								
		t.join();
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << '\n';
	}
}
