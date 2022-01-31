#include<ranges>
#include<sstream>
#include<iostream>

int main()
{
	using namespace std;
	istringstream iss{ "akif murat kadir harun erkan sercan" };
	
	for (const auto& s : ranges::istream_view<string>(iss))
	{
		std::cout << s << ' ';
	}
}
