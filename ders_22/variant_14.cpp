#include <iostream>
#include <variant>
#include <string>

int main()
{
	std::variant<int, double, std::string> vx{ "Mustafa Ceyhan" };

	if (auto p = get_if<std::string>(&vx))
	{
		std::cout << *p << "\n";
	}
	else
	{
		std::cout << "alternatif string degil\n";
	}
}
