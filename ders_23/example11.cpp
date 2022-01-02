#include <iostream>
#include <complex>
#include <any>

int main()
{
	using namespace std;

	any x{ 3 };

	x.reset(); // it also calls destructor for class objects

	if (x.has_value())
	{
		std::cout << "Deger tutuyor\n";
	}
	else
	{
		std::cout << "Deger tutmuyor\n";
	}
}
