#include <iostream>
#include <variant>
#include <complex>

int main()
{
	using namespace std;

	variant<int, double, complex<double>> vx{ in_place_index<2>, 3.5, 7.8 };

	std::cout << get<2>(vx) << '\n'; // (3.5,  7.8) complex constructor called
}


//--------------------------------------------------------------------------------------

#include <iostream>
#include <variant>
#include <complex>
#include <set>

int main()
{
	using namespace std;
	auto pred = [](int a, int b)
	{
		return std::abs(a) < std::abs(b);
	};

	variant<set<int>, set<int, decltype(pred)>> vx{ in_place_index<1>, {1,4,6,9,-1 }, pred };  // C++17 and C++20
	variant<set<int>, set<int, decltype(pred)>> vx{ in_place_index<1>, {1,4,6,9,-1 }};  // C++20
}
