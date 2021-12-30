#include<iostream>
#include<variant>

int main()
{
	variant<char, double, float> vx{4.5f};
	std::cout << vx.index() << '\n';		// 2
}
