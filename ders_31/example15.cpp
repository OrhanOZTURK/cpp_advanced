#include <iostream>
#include <ranges>

using namespace std;

std::string trim(std::string s)
{
	auto v = s | views::drop_while(std::isspace)		
		| views::reverse				
		| views::drop_while(std::isspace)	
		| views::reverse;		

	return std::string(v.begin(), v.end());
}

int main()
{
	using namespace std;
	string str{ "	 \t\nmustafa aksoy\t		\n" };
	cout << "|" << trim(str) << "|";
}
