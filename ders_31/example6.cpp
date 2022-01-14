#include <iostream>
#include <ranges>
#include <vector>
#include "nutility.h"


int main()
{
	using namespace std;

	vector ivec{ 1,2,3,4,5,15,25,40,60 };
	print(ivec);

	for (auto i : views::take(ivec, 4))
	{
		std::cout << i << ' '; //first 4
	}
}
