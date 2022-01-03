#include <iostream>

struct Nec {
	int x, y;
};
int main()
{
	Nec nec1{ 10,20 }; // Valid at C++17 and C++20
	Nec nec2(10, 20);  // Invalid at C++17. Valid at C++20
}
