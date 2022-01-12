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

	char c;

	std::cout << "icinde hangi karkaterler olanlar : ";
	std::cin >> c;

	for (const auto& s : views::transform(svec, [](const auto& s) { return s + "can"; }))
		std::cout << s << '\n'; // kelimelerin sonuna can eklendi.

}
