#include <iostream>
#include <variant>

int main()
{
	using namespace std;

	variant<monostate, int, string> vx;
	variant<int, string> vy;

	std::cout << (vx == vy); //geçersiz - farklı turler
}
