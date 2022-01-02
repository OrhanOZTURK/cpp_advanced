#include <iostream>
#include <string>
#include <variant>
#include <random>
#include <regex>

using vtype = std::variant<int, double, char>;
using vtype2 = std::variant<int, double, std::string>;
using vtype3 = std::variant<std::regex, int, double, std::string>;
using vtype4 = std::variant<std::mt19937, int, double, std::string>;
using vtype5 = std::variant<std::regex, int, double, std::string>;

int main()
{
	std::cout << "sizeof(vtype) = " << sizeof(vtype) << "\n"; // 16. Implementation defined 
	std::cout << "sizeof(vtype2) = " << sizeof(vtype2) << "\n";  // 32
	std::cout << "sizeof(vtype3) = " << sizeof(vtype3) << "\n";  // 32
	std::cout << "sizeof(vtype4) = " << sizeof(vtype4) << "\n";  // 5008
	vtype x;
	std::cout << "sizeof(x) = " << sizeof(x) << "\n";	// 16
}
