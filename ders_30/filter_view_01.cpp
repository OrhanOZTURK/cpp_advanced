#include <vector>
#include <ranges>
#include <iostream>

int main()
{
	std::vector ivec{ 81, 45, 56, 82, 52, 77, 21, 3, 14, 56, 82, 35, 94 };

	std::ranges::filter_view vw(ivec, [](int x) { return x % 2 == 0; });

	for (auto i : vw) {
		std::cout << i << ' '; //56 82 52 14 56 82 94
	}
}
