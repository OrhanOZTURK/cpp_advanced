#include <optional>
#include <iostream>

int main()
{
	using namespace std;
	
	optional<int>	oe;
	optional		ox{ 10 };
	optional		oy{ 20 };

	cout.setf(ios::boolalpha);

	cout << (oe == ox) << '\n'; //false
	cout << (oe == nullopt) << '\n'; //true
	cout << (oe < ox) << '\n'; //true
	cout << (ox > oy) << '\n'; //false
	cout << (ox == 10) << '\n'; //true

	optional<unsigned> oz;
	optional<unsigned> omin{ 0 };
	cout << (oz < omin) << '\n'; //true
}
