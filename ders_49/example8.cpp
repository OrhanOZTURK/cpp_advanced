#include <iostream>
#include <thread>

void f1()
{
	for (int i = 0; i < 10000; ++i)
	{
		std::cout << "necati ergin" << "haydar";
	}
}
void f2()
{
	for (int i = 0; i < 10000; ++i)
	{
		std::cout << "mehmet ozuag" << "burak";
	}
}
void f3()
{
	for (int i = 0; i < 10000; ++i)
	{
		std::cout << "dogukan yigit polat";
	}
}
int main()
{
	std::thread t1{ f1 };
	std::thread t2{ f2 };
	std::thread t3{ f3 };
	t1.join();
	t2.join();
	t3.join();
}
