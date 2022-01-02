#include <iostream>
#include <complex>
#include <any>
#include "Date.h"

int main()
{
	using namespace std;

	any a{ in_place_type<string>,"necati" };

	any b{ in_place_type<complex<double>>,4.5, 7.6 };

	any c{ in_place_type<Date>, 14,10,2010 };
}
