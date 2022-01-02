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
	variant<set<int>, set<int, decltype(pred)>> vx{ in_place_index<1>, {1,4,6,9,-1 } };  // C++20
}
