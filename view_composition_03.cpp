#include <vector>
#include <ranges>
#include <iostream>
#include <algorithm>

int main()
{
	using namespace std;

	vector ivec{ 81, 45, 45, 55, 52, 65, 21, 87, 14, 90, 82, 35, 94, 120, 245 };

	auto v = views::filter(ivec, [](int x) {return x % 5 == 0; }) 
		     | views::transform([](int x) { return x * x; }) 
		     | views::take(10);

	for (auto iter = v.begin(); iter != v.end(); ++iter) {
		cout << *iter << ' ';
	}

	cout << '\n';

	ranges::for_each(v, [](auto x) { std::cout << "(" << x << ")"; });
}
