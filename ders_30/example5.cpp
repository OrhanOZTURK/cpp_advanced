#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector ivec{ 12, 5, 218, 9, 3, 24, -1, -9, -41, 6 };

	ranges::sort(ivec, {}, [](int x) { return std::abs(x); });

	for (auto i : ivec)
		std::cout << i << ' ';
}
