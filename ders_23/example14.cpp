#include <iostream>
#include <any>

int main()
{
	using namespace std;

	any x{ 3.45 };

	x = 45;

	try {
		auto& r = any_cast<int&>(x);
		std::cout << r << '\n';
	}
	catch (const bad_any_cast& ex)
	{
		std::cout << "exception caught: " << ex.what() << '\n';
	}

	//--------------------------------------------------------------------

	any y{ "mustafa"s };

	any_cast<string&>(y).append("can");

	std::cout << any_cast<string>(y) << "\n";

	//--------------------------------------------------------------------

	any a;

	std::cout << boolalpha;

	std::cout << a.has_value() << "\n"; // false

	a = 45;
	std::cout << a.has_value() << "\n"; // true

	a.reset();
	std::cout << a.has_value() << "\n"; // false

	a = true;
	std::cout << a.has_value() << "\n"; // true

	a = {};
	std::cout << a.has_value() << "\n"; // false

}
