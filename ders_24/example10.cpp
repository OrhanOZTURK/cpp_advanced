#include <iostream>
#include <compare>
#include <optional>

class Mint {
public:
	explicit constexpr Mint(int val) : mval{ val } { }

	auto operator<=>(const Mint&)const = default;
private:
	int mval;
};

template<typename T>
constexpr bool is_less_than(const T& lhs, const T& rhs)
{
	return lhs < rhs;
}

int main()
{
	std::cout << std::boolalpha;
	constexpr Mint mint1(208);
	constexpr Mint mint2(751);
	constexpr auto b = is_less_than(mint1, mint2);  //Valid
}
