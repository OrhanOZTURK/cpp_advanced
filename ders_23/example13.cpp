#include <iostream>
#include <any>

int main()
{
	using namespace std;

	any x{ 2.3 };

	try {
		std::cout << "deger : " << any_cast<double>(x) << '\n';
	}
	catch (const std::exception& ex)
	{
		std::cout << "exception caught : " << ex.what() << '\n';
	}
}
