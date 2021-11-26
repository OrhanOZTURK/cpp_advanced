#include <optional>
#include <complex>
#include <set>

class Date {
public:
	Date(int d, int m, int y);
	//...
};

int main()
{
	std::optional<std::complex<double>> op1{ std::in_place, 1.2, 5.6 };
	
	auto fcomp = [](int x, int y) {return std::abs(x) < std::abs(y); };
	std::optional <std::set<int, decltype(fcomp)>> op5{ std::in_place, {2, 3, 5, 7, 9}, fcomp };
}
