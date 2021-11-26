#include <optional>
#include <iostream>

struct A {
	A() = default;
	~A() {
		std::cout << "destructor\n";
	}
};

int main()
{
	using namespace std;
	{
		optional<A> x1;
		x1.emplace();
	}
	std::cout << "1\n";
	optional<A> x2; x2.emplace();
	x2.reset();
	std::cout << "2\n";
	optional<A> x3; x3.emplace();
	x3 = nullopt;
	std::cout << "3\n";
	optional<A> x4; x4.emplace();
	x4 = {};
	std::cout << "4\n";
}


