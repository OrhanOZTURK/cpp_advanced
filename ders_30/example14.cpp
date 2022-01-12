#include<iostream>
#include<ranges>
#include<vector>
#include"nutility.h"


int main()
{
	using namespace std;

	vector ivec{ 81,45,45,55,52,65,21,87,14,90,82,35,94,120,245 };
	print(ivec);

	auto v = views::take(views::filter(ivec, [](int x) { return x % 5 == 0; }), 5);

	for (auto i : v)
		std::cout << i << ' '; // 45 45 55 65 90
}
