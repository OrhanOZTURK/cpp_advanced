#include <optional>
#include <iostream>
#include <string>

template <typename T>
void op_print(const std::optional<T>& op)
{
	if (op)
		std::cout << "value is : " << *op << '\n';
	else
		std::cout << "has no value\n";
}

int main()
{
	using namespace std::string_literals;

	std::optional<int> op1;
	op_print(op1);

	std::optional<double> op2{};
	op_print(op2);

	//std::optional<long> op3(); //function decl.

	std::optional<char> op4 = std::nullopt;
	op_print(op4);

	std::optional op5{ 12.f }; //CTAD
	op_print(op5);

	std::optional op6{ "necati" };
	op_print(op6);

	std::optional op7{ "necati"s };
	op_print(op7);

	std::optional<std::string> op8{ "alican" };
	op_print(op8);
}
