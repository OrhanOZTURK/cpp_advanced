#include<vector>
#include<ranges>
#include<iostream>
#include "nutility.h"

int main()
{
	using namespace std;
	using Person = tuple<int, string, string, double>;
	
	vector<Person> pvec;
	Irand irand{ 0,100'000 };
	Drand drand{ 15., 99.99 };
	
	for (int i = 0; i < 100; ++i)
	{
		pvec.emplace_back(irand(), rname(), rfname(), drand());
	}
	
	auto vw = views::elements<0>(pvec);
	//auto vw = views::elements<1>(pvec);
	//auto vw = views::elements<2>(pvec);
	//auto vw = views::elements<3>(pvec);
	
	for (const auto& x : vw)
	{
		std::cout << x << " ";
	}
}
