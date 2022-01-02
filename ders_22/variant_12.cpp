#include <iostream>
#include <variant>
#include "date.h"

int main()
{
	using namespace std;

	variant<monostate, int, double, Date> vx;

	vx = 5;   // geçerli
	vx = Date{}; // geçerli
	vx = 4.5;   // geçerli
	vx = monostate{};   // geçerli
	vx = {};	// geçerli
}
