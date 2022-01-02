#include <iostream>
#include <variant>
#include <complex>

int main()
{
	using namespace std;

	variant<int, double, complex<double>> vx{ in_place_index<2>, 3.5, 7.8 };

	scout << get<2>(vx) << '\n'; // (3.5,  7.8) complex constructor called
}
