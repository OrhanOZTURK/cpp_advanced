#include<iostream>
#include<variant>
#include<string>
#include"Date.h"

class Date
{
public:
	Date(int mx, int my, int mz)
	{

	}
	
	Date()
	{

	}
};

int main()
{
	using namespace std;

	variant<Date, int, double, string> vx; // valid
	vx = "Ali";							   // valid
	get<0>(vx) = Date{ 1,5,1987 };		   // valid
	get<Date>(vx) = Date{ 1,5,1987 };      // valid
	cout << get<Date>(vx) << "\n";         // valid
	cout << get<float>(vx);				   // Error.Float doesn't exist
	cout << get<4>(vx);					   // Error.Index error
}
