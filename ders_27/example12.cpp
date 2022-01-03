#include <iostream>
#include <vector>

struct Nec {
	int a : 4{2};
	int b : 4 = 5;  // Valid at C++20. Invalid at C++17
};

int main()
{

}
