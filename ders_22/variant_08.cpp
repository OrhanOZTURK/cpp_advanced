#include <iostream>
#include <variant>
#include <string>


int main()
{
	using namespace std;

	variant<char, double, float> v1;
	//std::cout << get<int>(v1);		// geçersiz

	variant<char, double, float> v2;
	//auto val = get<3>(vx); // gecersiz

	 variant<char, double, float> vx{ 4.5 };

	try {
		auto val = get<char>(vx); //  exception std::bad_variant_access
		//auto val = get<2>(vx); // exception std::bad_variant_access
	}
	catch (const std::bad_variant_access& ex)
	{
		std::cout << "exception caught: " << ex.what() << '\n';
	}
}
