#include<iostream>
#include<variant>

int main()
{
	using namespace std;

	variant<char, double, float> vx{ 4.5 };

	if (holds_alternative<double>(vx))
	{
		std::cout << "evet double tutuyor";
	}
	else
	{
		std::cout << "hayir double tutmuyor";
	}
}
