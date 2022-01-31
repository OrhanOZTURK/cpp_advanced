#include<vector>
#include<ranges>
#include<iostream>

int main()
{
	using namespace std;

	vector<int> ivec{ 6,87,5,4,32,43,456,45,4,657,768,324,4,4,9 };
	auto spv = std::views::split(ivec, 4); // 4 e göre ayıracak.
	
	for (const auto& split : spv) 
	{
		std::cout << "[";
		std::ranges::copy(split, std::ostream_iterator<int>{cout, " "});  // [6 87 5 ] [32 43 456 45 ] [657 768 324 ] [] [9 ]
		std::cout << "] ";
	}
}
