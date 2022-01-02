#include <iostream>
#include <variant>

int main()
{
	std::variant<char, double, float> vx{ 4.5f };
	std::cout << vx.index() << '\n';	
}
