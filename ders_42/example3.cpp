#include <iostream>
#include <tuple>

int main()
{
	using namespace std;

	int x = 10, y = 20, z = 30, t = 40;
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "z = " << z << '\n';
	cout << "t = " << t << '\n';
	
	std::cout << "------\n";
	
	tie(x, y, z, t) = tuple{ y,z,t,x }; 
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
	cout << "z = " << z << '\n';
	cout << "t = " << t << '\n';
}

OUTPUT
------
x = 10
y = 20
z = 30
t = 40
------
x = 20
y = 30
z = 40
t = 10
