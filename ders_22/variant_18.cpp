#include <iostream>
#include <variant>

int main()
{
	using namespace std;

	variant<monostate, int, string> v1, v2{ "mustafa" }, v3(123);
	variant<monostate, int, string> v4;

	std::cout << boolalpha;

	std::cout << "v1 == v2 : " << (v1 == v2) << '\n'; // FALSE

	std::cout << "v1 < v2 : " << (v1 < v2) << '\n'; // TRUE

	std::cout << "v2 < v3 : " << (v2 < v3) << '\n'; // FALSE

	v2 = 89;
	std::cout << "v2 < v3 : " << (v2 < v3) << '\n';  // TRUE
}
