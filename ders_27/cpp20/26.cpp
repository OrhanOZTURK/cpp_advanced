#include <utility>

template <typename T>
using ipair = std::pair<int, T>;

int main()
{
	using namespace std;
	
	ipair<double>;
	
	ipair p{ 1,2.3 }; // Valid at C++20
}
