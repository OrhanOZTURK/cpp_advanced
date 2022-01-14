#include <iostream>
#include <ranges>
#include <vector>
#include "nutility.h"

using namespace std;

int main()
{
	
	auto odd = [](int x) {
		std::cout << "odd => x = " << x << '\n';
		return x % 2 != 0;
	};
	
	auto cube = [](int y) {
		std::cout << "cube => y = " << y << '\n';
		return y * y * y;
	};
	
	vector vec{ 40,25,96,74,51,14,58,69,78 };
	auto v = vec | views::filter(odd) | views::transform(cube); //Lazy evaluation

	getchar();//
	
	for (auto i : v)
	{
		std::cout << "i = " << i << "\n"; // 
	}
}

Output
------
odd = > x = 40
odd = > x = 25
cube = > y = 25
i = 15625
odd = > x = 96
odd = > x = 74
odd = > x = 51
cube = > y = 51
i = 132651
odd = > x = 14
odd = > x = 58
odd = > x = 69
cube = > y = 69
i = 328509
odd = > x = 78
