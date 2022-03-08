#include <iostream>
#include <tuple>

template<typename Der>
class A {
public:

};

template<typename Der>
class B {
public:

};

template<typename Der>
class C {
public:

};

template<template<typename> typename ...Ts>
class Myclass : public Ts<Myclass<Ts...>>...
{
public:
	Myclass()
	{
		std::cout << typeid(std::tuple<Myclass<Ts...>>).name() << '\n';
		// class std::tuple<class Myclass<class A,class B,class C> >

		std::cout << typeid(std::tuple<Ts<Myclass<Ts...>>...>).name() << '\n';
		// class std::tuple<class A<class Myclass<class A, class B, class C> >, class B<class Myclass<class A, class B, class C> >, class C<class Myclass<class A, class B, class C> > >
	}
};

int main()
{
	Myclass<A, B, C> x;
}
