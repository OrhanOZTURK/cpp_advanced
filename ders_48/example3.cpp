#include <thread>
#include <iostream>

void func()
{
	for (int i = 0; i < 1000000; ++i)
	{
		std::cout << '*';
	}
}

void foo()
{
	for (int i = 0; i < 1000000; ++i)
	{
		std::cout << '?';
	}
}

void bar()
{
	for (int i = 0; i < 1000000; ++i)
	{
		std::cout << '-';
	}
}

int main()
{
	using namespace std;

	thread t1{ func };
	thread t2{ foo };
	thread t3{ bar };

	for (int i = 0; i < 1000000; ++i)
	{
		std::cout << '.';
	}

	t1.join();
	t2.join();
	t3.join();
}
