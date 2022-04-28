#include <iostream>
#include <future>

using namespace std::literals;

constexpr int x = 50;

long long fib(int n)
{
	return n < 3 ? 1 : fib(n - 1) + fib(n - 2);
}

int main()
{
	auto ftr = std::async(fib, x);

	while (ftr.wait_for(50ms) == std::future_status::timeout)
	{
		std::cout << '.' << std::flush;
	}

	auto result = ftr.get();
	std::cout << "fib(" << x << ") is : " << result << '\n';
}
