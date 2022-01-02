#include <iostream>
#include <complex>
#include <any>
#include "Date.h"

int main()
{
	using namespace std;
	any x{ 13 };

	std::cout << boolalpha;

	std::cout << (x.type() == typeid(int)) << "\n"; //True
	std::cout << (x.type() == typeid(double)) << "\n"; //False
	std::cout << (x.type() == typeid(Date)) << "\n"; //False

	std::cout << x.type().name() << "\n"; // Implementation defined

}
