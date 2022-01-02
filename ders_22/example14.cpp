#include <iostream>
#include <variant>
#include <string>

int main()
{
	using namespace std;

	variant<int, double, string> vx{ "Mustafa Ceyhan" };

	if (auto p = get_if<string>(&vx))   
	{								 
		std::cout << *p << "\n";
	}
	else
	{
		std::cout << "alternatif string degil\n";
	}
}
