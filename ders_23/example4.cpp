#include <iostream>
#include <variant>

int main()
{
	std::variant<std::string, int, double, std::string> vx;

	vx.emplace<0>("murat");		
	std::cout << get<0>(vx) << "\n";

	//std::cout << get<string>(vx) << "\n"; // Ambigiuty 

	vx.emplace<3>("aksoy");			 
	std::cout << get<3>(vx) << "\n"; 
}
