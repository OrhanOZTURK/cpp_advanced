#include<iostream>
#include<ranges>
#include<vector>
#include"nutility.h"


int main()
{
	using namespace std;

	vector ivec{ 81,45,56,82,52,77,21,3,14,56,82,35,94 };
	print(ivec);

	std::ranges::take_view v{ ivec,5 }; 
					 
	for (auto i : v)
	{
		std::cout << i << ' ';
	}
  
	std::cout << '\n';
	std::cout << typeid(v).name() << '\n'; 
}
