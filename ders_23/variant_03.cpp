#include<variant>

int main()
{
	std::variant<int, double> vx;
	std::variant<char, float> vy;

	vx = vy; // gecersiz
}
