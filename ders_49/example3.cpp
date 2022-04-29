#include <iostream>
#include <future>

void func()
{
	std::cout << "func cagrildi\n";
	if (1)
	{
		throw std::runtime_error{ "error from func\n" };
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
		std::thread t{ func };  // Burada exception gönderiliyor ama yakalanmıyor.
					// Doğrudan std::terminate çağrılıyor.
		t.join();
	}
	catch (const std::exception& ex)
	{
		std::cout << ex.what() << '\n';
	}
}
