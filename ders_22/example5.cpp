#include<iostream>
#include<variant>

class Myclass
{
public:
	Myclass(int)
	{

	}
};
int main()
{
	using namespace std;
	//variant<Myclass, int, double> vx;  // Syntax Error
	variant<int, Myclass, double> vy;  // Valid
}
