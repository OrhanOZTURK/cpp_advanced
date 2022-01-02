#include <any>
#include <string>
#include <vector>
#include <bitset>

int main()
{
	using namespace std;

	any a1{ 13 }; // int
	any a2 = 4.5; // double
	any a3 = "remzi"; // const char *
	any a4 = "remzi"s; // string
	any a5 = std::bitset<16>(456u);
	any a6{ vector<int>{2,3,5,7,11} };
}
