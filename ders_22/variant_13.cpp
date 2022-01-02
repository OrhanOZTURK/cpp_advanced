#include <iostream>
#include <variant>

int main()
{
	using namespace std;

	variant<int, double, long> vx{ 1 };
	std::cout << vx.index() << '\n'; // 0

	vx = 2.3;
	std::cout << vx.index() << '\n'; // 1

	vx = 5L;
	std::cout << vx.index() << '\n'; // 2
}
