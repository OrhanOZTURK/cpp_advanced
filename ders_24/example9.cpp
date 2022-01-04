#include <iostream>
#include <compare>
#include <optional>

struct Myint {
	std::optional<int> mval = std::nullopt;

	bool operator==(const Myint& other)const
	{
		if (!mval || !other.mval) 
			return false;
		return *mval == *other.mval;
	}
	std::partial_ordering operator<=>(const Myint& other)const
	{
		if (!mval || !other.mval)
			return std::partial_ordering::unordered;
		return *mval <=> other.mval;
	}
};


int main()
{
	auto result = Myint{ 12 } <=> Myint{ 4 }; // valid

	std::cout << std::boolalpha << (Myint{ 123 } < Myint{}) << '\n'; // False
	std::cout << std::boolalpha << (Myint{ 123 } > Myint{}) << '\n'; // False
	std::cout << std::boolalpha << (Myint{ 123 } == Myint{}) << '\n'; // False
}
