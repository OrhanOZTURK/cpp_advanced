#include <iostream>
#include <variant>
#include "Date.h"

int main()
{
	using namespace std;
  
	variant<monostate, int, double, Date> vx;
  
	vx = 5;   // valid
	vx = Date{}; // valid
	vx = 4.5;   // valid
	vx = monostate{};   // valid
	vx = {};		  // valid
}
