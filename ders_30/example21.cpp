#include<iostream>
#include<ranges>
#include<string>
#include"nutility.h"


int main()
{
	using namespace std;

	vector<string> svec;
	rfill(svec, 30, rname);
	print(svec);

	auto v = views::transform(svec, [](const auto& s) { return s.length(); }); 

	std::cout << typeid(*v.begin()).name() << '\n'; 

	for (auto len : v)
		std::cout << len << ' ';
}
