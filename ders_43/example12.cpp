#include <iostream>

template<typename T>
class A {
};

template<typename T>
class B {
};

template<typename T>
class C {
};

template<typename T, template<typename> typename ...Ts>
class Myclass {
public:
	Myclass()
	{
		std::cout << typeid(Myclass).name() << '\n';
		std::cout << typeid(*this).name() << '\n';
		std::cout << typeid(std::tuple<Ts<T>...>).name() << '\n';
	}
};

int main()
{
	Myclass<int, A, B, C> x;
}

OUTPUT
------
class Myclass<int, class A, class B, class C>
class Myclass<int, class A, class B, class C>
class std::tuple<class A<int>, class B<int>, class C<int> >
