#include<vector>
#include<ranges>
#include<iostream>
#include "nutility.h"

int main()
{
	using namespace std;
	vector<pair<int, string>> isvec;
	
	for (int i = 0; i < 30; ++i)
	{
		isvec.emplace_back(Irand{ 0,1000 }(), rname());
	}
	
	print(isvec, "\n");
	size_t len;
	std::cout << "uzunluk : ";
	cin >> len;
	auto pred = [len](const string& s) { return s.length() == len; };
	
	for (const auto& s : isvec | views::values | views::filter(pred))
	{
		std::cout << s << ' ';
	}	
	
	/*
	for (const auto& s : views::filter(views::values(isvec), [len](const string&str) {return str.length() == len;}))  //Valid
	{
		std::cout << s << ' ';
	}
	*/
}
