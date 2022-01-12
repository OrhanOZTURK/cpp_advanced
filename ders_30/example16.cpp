#include<iostream>
#include<ranges>
#include<vector>
#include"nutility.h"


int main()
{
	using namespace std;
	
	vector ivec{ 81,45,45,55,52,65,21,87,14,90,82,35,94,120,245 };
	print(ivec);
	
	auto v = views::filter(ivec, [](int x) {return x % 5 == 0; }) | views::transform([](int x) { return x * x; }) | views::take(10);
	
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		std::cout << *iter << ' ';
	}

	std::cout << '\n';
	
	ranges::for_each(v, [](auto x) { std::cout << "(" << x << ")"; });
}
