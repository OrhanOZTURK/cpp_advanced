#include <iostream>
#include <optional>

struct Nec {
	Nec()
	{
		std::cout << "default ctor\n";
	}
	Nec(const Nec&) = delete;
	Nec& operator=(const Nec&) = delete;
	Nec(Nec&&)
	{
		std::cout << "move ctor\n";
	}
};

int main()
{
	Nec nec;
	
	std::optional<Nec> op1{ std::move(nec) };	

	std::optional<Nec> op2(std::move(op1)); 
	
	std::cout << (op1 ? "not empty" : "empty") << '\n';

	std::cout << (op2 ? "not empty" : "empty") << '\n';
}
