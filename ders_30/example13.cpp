#include<iostream>
#include<ranges>
#include<vector>
#include"nutility.h"


int main()
{
	using namespace std;

	vector ivec{ 81,45,56,82,52,77,21,3,14,56,82,35,94 };
	print(ivec);

	ranges::filter_view v(ivec, [](int x) { return x % 2 == 0; });
					 
	for (auto i : v)	
	{
		std::cout << i << ' '; //56 82 52 14 56 82 94
	}
	std::cout << '\n';
	std::cout << typeid(v).name() << '\n'; 
}
