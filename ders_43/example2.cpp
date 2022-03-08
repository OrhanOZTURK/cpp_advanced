#include <iostream>

template<typename T>
class Nec {
};


template<typename T, typename U = Nec<T>>
class Myclass {
public:
	Myclass(T x, const U & = U())
	{
		std::cout << "Myclass ctor called\n";
	}
};

int main()
{
	Myclass<int, double>x(12); // Valid
	Myclass<int>y(12); // Valid
	Myclass z(12); // Valid
}
