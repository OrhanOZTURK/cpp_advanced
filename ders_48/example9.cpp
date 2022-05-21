#include <iostream>
#include <thread>

void foo(std::vector<int>&& ivec)
{
	for (const auto val : ivec)
		std::cout << val << " ";
}
int main()
{
	using namespace std;
	std::vector<int> ivec{ 1,2,3,4,5 };
	thread tx{ foo,std::move(ivec) }; //valid

	tx.join();
	std::cout << '\n' << ivec.size() << '\n';
}
