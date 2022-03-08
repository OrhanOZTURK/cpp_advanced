#include <iostream>
#include <tuple>

int main()
{
	int x = 23, y = 34;
	std::cout << "x = " << x << " y = " << y << '\n'; 
	
	std::tie(x, y) = std::pair{ y,x };
	std::cout << "x = " << x << " y = " << y << '\n'; 
}

OUTPUT
------
x = 23 y = 34
x = 34 y = 23
