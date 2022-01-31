#include<vector>
#include<array>
#include<ranges>
#include<iostream>

int main()
{

	using namespace std;
	vector<int> ivec{ 3,4,7,6,87,5,32,43,456,3,4,7,45,657,768,3,4,7,324,9 };
	array sep{ 3,4,7 };
	auto spv = views::split(ivec, sep);

	for (const auto& split : spv)
	{
		cout << "[";
		ranges::copy(split, std::ostream_iterator<int>{cout, " "}); //[] [6 87 5 32 43 456 ] [45 657 768 ] [324 9 ]
		cout << "] ";
	}
}
