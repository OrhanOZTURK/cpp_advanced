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

	for (const auto& s : views::filter(svec, [](const auto& s) { return s.length() % 2 == 0; }))
		std::cout << s << '\n'; // Uzunluğu çift olanlar yazılacak

}
