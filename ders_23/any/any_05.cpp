#include <iostream>
#include <any>
#include "date.h"

int main()
{
	using namespace std;
	any x{ 13 };

	std::cout << boolalpha;

	std::cout << (x.type() == typeid(int)) << "\n"; //true
	std::cout << (x.type() == typeid(double)) << "\n"; //false
	std::cout << (x.type() == typeid(Date)) << "\n"; //false

	std::cout << x.type().name() << "\n"; // Implementation defined
}
