#include <iostream>
#include <thread>

int main()
{
	using namespace std;
	thread t{ [](int x) { std::cout << x << "\n"; }, 10 };	// valid
	t.join();
}
