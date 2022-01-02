#include<iostream>
#include<variant>


int main()
{
	using namespace std;

	variant<string, int, double, string> vx;

	vx.emplace<0>("murat");		//valid
	cout << get<0>(vx) << "\n"; //valid

	std::cout << get<string>(vx) << "\n"; // Ambigiuty 

	vx.emplace<3>("aksoy");			 //valid
	std::cout << get<3>(vx) << "\n"; //valid
}
