#include <iostream>

int main()
{
	int x = -1;
	if ((x >> 1) == 1)	//C++17 Implementation defined. C++20 Valid
	{
		std::cout << "dogru\n"; 
	}
	else
	{
		std::cout << "yanlis\n";
	}
}
