#include <iostream>
#include <any>

int main()
{
	using namespace std;

	any x{ 3.45 };

	x = 45;

	try {
		auto& r = any_cast<int&>(x);
		cout << r << '\n';
	}
	catch (const bad_any_cast& ex)
	{
		cout << "exception caught: " << ex.what() << '\n';
	}

	//--------------------------------------------------------------------

	any y{ "mustafa"s };

	any_cast<string&>(y).append("can");

	cout << any_cast<string>(y) << "\n";

	//--------------------------------------------------------------------

	any a;

	cout << boolalpha;

	cout << a.has_value() << "\n"; // false

	a = 45;
	cout << a.has_value() << "\n"; // true

	a.reset();
	cout << a.has_value() << "\n"; // false

	a = true;
	cout << a.has_value() << "\n"; // true

	a = {};
	cout << a.has_value() << "\n"; // false

}
