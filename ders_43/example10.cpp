#include <iostream>
#include <vector>

template<typename T, typename A, template<typename, typename> class Con>
void func(const Con<T, A>& c)
{
	std::cout << typeid(T).name() << '\n';	 // int
	std::cout << typeid(A).name() << '\n';   // class std::allocator<int>
	std::cout << typeid(c).name() << '\n';   // class std::vector<int,class std::allocator<int> >
	std::cout << typeid(Con).name() << '\n'; // class std::vector
}
int main()
{
	using namespace std;

	vector<int> ivec;
	func(ivec);
}
