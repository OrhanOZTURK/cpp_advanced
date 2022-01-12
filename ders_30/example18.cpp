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

	for (const auto& s : views::filter(svec, [c](const auto& s) { return s.find(c) != string::npos; }))
		std::cout << s << '\n'; // İçerisinde belirli bir karakter olanları yazdırdık

}
