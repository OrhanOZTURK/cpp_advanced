#include <iostream>
#include <vector>

template<typename T>
class Nec {
};

template<typename T, template<typename> typename C>
class Myclass {
public:
	Myclass()
	{
		std::cout << typeid(C<T>).name() << '\n';
	}
};

int main()
{
	Myclass<double, Nec> m;
	Myclass<int, Nec> n;
}

OUTPUT
------
class Nec<double>
class Nec<int>
