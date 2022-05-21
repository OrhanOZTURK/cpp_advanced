#include <thread>
#include <iostream>
void func()
{
	for (int i = 0; i < 1000000; ++i)
	{
		std::cout << '*';
	}
}
int main()
{
	using namespace std;
	thread t1{ func };

	for (int i = 0; i < 1000000; ++i)
	{
		std::cout << '.';
	}
	t1.join(); 

	//...
}
