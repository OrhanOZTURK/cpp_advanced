#include <iostream>
#include <thread>

void foo(int x)
{
	std::cout << "foo x = " << x << "\n";
}
void func(int x,int y, int z)
{
	std::cout << "foo x = " << x << "\n";
	std::cout << "foo y = " << y << "\n";
	std::cout << "foo z = " << z << "\n";
}
int main()
{
	using namespace std;
	thread tx{foo,10}; 
	thread ty{func,10,20,30}; 
	tx.join();
	ty.join();
}
