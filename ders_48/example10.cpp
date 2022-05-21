#include <iostream>
#include <thread>

void foo(int& r)
{
	++r;
}

int main()
{
	using namespace std;
	int x{ 43 };
	
	// thread tx{foo,x}; Syntax error

	thread tx{ foo,ref(x) };  // Valid
	
	tx.join();
	std::cout << x << '\n';
}
