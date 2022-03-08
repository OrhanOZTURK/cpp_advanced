#include <iostream>
#include <tuple>

int sum(int x, int y, int z)
{
	return x + y + z;
}

int main()
{
	std::tuple t{ 1,6,9 };
	std::cout << sum(get<0>(t), get<1>(t), get<2>(t)) << '\n'; //16

	std::cout << std::apply(sum, t) << '\n'; // 16
}
