#include <iostream>
#include <vector>
#include <ranges>

int main()
{
	using namespace std;

	auto odd = [](int x) {
		cout << "odd => x = " << x << '\n';
		return x % 2 != 0;
	};

	auto cube = [](int y) {
		cout << "cube => y = " << y << '\n';
		return y * y * y;
	};

	vector vec{ 40, 25, 96, 74, 51, 14, 58, 69, 78 };
	auto v = vec | views::filter(odd) | views::transform(cube); //lazy evaluation

	(void)getchar();

	for (auto i : v) {
		cout << "i = " << i << '\n';
	}
}
