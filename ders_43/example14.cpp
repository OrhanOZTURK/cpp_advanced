#include <iostream>

template <int x = 10, int y = 20>
class Myclass
{
};

int main()
{
	Myclass<5, 9> x; // Myclass<5,9>
	Myclass<5> y;  // Myclass<5,20>
	Myclass <>z;	// Myclass<10,20>
}
