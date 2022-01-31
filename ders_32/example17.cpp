#include<ranges>
#include<vector>
#include<sstream>
#include<iostream>
#include"nutility.h"

template<std::ranges::view T>
void vw_print(T x)
{
	for (auto iter = std::ranges::begin(x); iter != std::ranges::end(x); ++iter)
	{
		std::cout << *iter << ' ';
	}
	std::cout << "\n\n";
}
int main()
{

	using namespace std;
	vector<string> svec;
	rfill(svec, 100, rtown);

	char c;
	std::cout << "karakter girin: ";
	cin >> c;
	const auto pred = [c](const string& s) { return s.find(c) != string::npos; };
	vw_print(views::all(svec) | views::filter(pred));
}
