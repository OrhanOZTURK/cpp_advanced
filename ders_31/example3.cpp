#include <iostream>
#include <ranges>
#include <vector>
#include <functional>
#include "nutility.h"


int main()
{
	using namespace std;

	vector ivec{ 1,2,3,4,5 };

	ranges::subrange sr1{ ivec }; // Ctad 

	cout << "sizeof(sr1) = " << sizeof(sr1) << '\n';

	sr1.front(); //valid
	sr1.back(); //valid

	ranges::subrange sr2{ ivec.begin(), ivec.end() };

	for (const auto i : sr2)
		std::cout << i << ' '; //1,2,3,4,5 
}
