#include <any>
#include <complex>
#include "date.h"


int main()
{
	auto a1 = make_any<string>(15,'A');
	auto a2 = make_any<Date>(4,5,1987);
	auto a3 = make_any<complex<double>>(1.1, 5.6);
}
