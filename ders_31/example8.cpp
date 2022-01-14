#include <iostream>
#include <ranges>
#include <vector>
#include "nutility.h"


int main()
{
	using namespace std;
	vector ivec{ 40,25,96,74,51,14,58,69,78 };

	int ival;

	std::cout << "Degeri girin : "; // 15
	cin >> ival;

	for (auto i : ivec | views::take_while([ival](int x) { return x > ival; }))
	{
		cout << i << ' ';	//40 25 96 74 51
	}
}
