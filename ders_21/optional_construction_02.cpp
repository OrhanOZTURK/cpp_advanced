#include <optional>

int main()
{
	std::optional op1 = 34;
	auto op2 = op1; //copy ctor

	std::optional<double> op3 = op2;
}
