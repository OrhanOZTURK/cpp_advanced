#include <iostream>
#include <vector>
#include <list>

template <typename T, typename U = std::vector<T>> 
void func(T x, U y = U{}) 
{
	std::cout << typeid(U).name();
	std::cout << "	y.size = " << y.size();
}
int main()
{
	func(12); 
	std::cout << '\n';
	func(12, std::list<double>(23));
}

OUTPUT
------
class std::vector<int, class std::allocator<int> >       y.size = 0
class std::list<double, class std::allocator<double> >   y.size = 23
