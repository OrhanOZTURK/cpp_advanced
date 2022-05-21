#include <iostream>
#include <thread>

void foo(int x)
{
	std::cout << "x = " << x << "\n";
}
int main()
{
	using namespace std;
	auto fp = foo;
	thread tx{ fp,21 }; // valid
	tx.join();
}
