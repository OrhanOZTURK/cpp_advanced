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


template<template<typename> typename ...Ts>
class Myclass {
public:
	Myclass()
	{
		std::cout << typeid(Myclass).name() << '\n';
		std::cout << typeid(*this).name() << '\n';
		std::cout << typeid(std::tuple<Ts<int>...>).name() << '\n';
	}
};

int main()
{
	Myclass<A> x1;
	Myclass<A, B> x2;
	Myclass<A, B, C> x3;
}

OUTPUT
------
class Myclass<class A>
class Myclass<class A>
class std::tuple<class A<int> >

class Myclass<class A, class B>
class Myclass<class A, class B>
class std::tuple<class A<int>, class B<int> >

class Myclass<class A, class B, class C>
class Myclass<class A, class B, class C>
class std::tuple<class A<int>, class B<int>, class C<int> >
