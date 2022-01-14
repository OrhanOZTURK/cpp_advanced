#include <iostream>
#include <ranges>
#include <vector>
#include "nutility.h"


int main()
{
	using namespace std;
	vector ivec{ 1,2,3,4,5,15,25,40,60 };

	for (auto i : views::drop(ivec, 5))
	{
		std::cout << i << ' ';  //15 25 40 60
	}
}
