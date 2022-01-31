#include<vector>
#include<ranges>
#include<list>
#include<iostream>
#include "nutility.h"

template<typename Iter>
void algo(Iter beg, Iter end)
{
	while (beg != end)
	{
		std::cout << *beg++ << ' ';
	}
	std::cout << '\n';
}

template<typename TBeg, typename TEnd>
void call_algo(TBeg beg, TEnd end)
{
	if constexpr (std::same_as<TBeg, TEnd>)
	{
		algo(beg, end);
	}
	else
	{
		using iter_type = std::common_iterator<decltype(beg), decltype(end)> ; 
																				
		algo(iter_type{ beg }, iter_type{ end });
		std::cout << '\n';
		
		//-----------------------------------------------------------------------------------
		
		// 2. yol
		auto v = std::views::common(std::ranges::subrange(beg, end));
		algo(v.begin(), v.end());
	}
}
int main()
{
	using namespace std;

	list ilist{ 1,4,6,1,3,4,7,8,9 };
	auto v = views::take(ilist, 6);
	call_algo(v.begin(), v.end());

}
