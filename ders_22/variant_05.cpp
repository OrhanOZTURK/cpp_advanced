#include <variant>

class Myclass
{
public:
	Myclass(int)
	{

	}
};

int main()
{
	using namespace std;

	//variant<Myclass, int, double> vx;  // geçersiz - default ctor yok
	variant<int, Myclass, double> vy;  // geçerli
}
