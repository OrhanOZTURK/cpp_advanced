#include<iostream>
#include<variant>
#include<string>


int main()
{
	using namespace std;

	//variant<char, double, float> vx;
	//std::cout << get<int>(vx); // Exception throw. bad_variant_access.
	
	//variant<char, double, float> vx;
	//auto val = get<int>(vx); // Syntax Error
	
	//variant<char, double, float> vx;
	//auto val = get<3>(vx); // Error

	variant<char, double, float> vx{ 4.5 };
	
	try {
		auto val = get<char>(vx); // Exception throw
		//auto val = get<2>(vx); // Exception throw
	}
	catch (const std::bad_variant_access& ex)
	{
		std::cout << "exception caught: " << ex.what() << '\n';
	}
}
