#include <iostream>
#include <vector>


template<typename T>
class Nec {
};

template<template<typename> typename C>
class Myclass {
public:
	Myclass()
	{
		C<int> i;
		C<double> d;
		std::cout << typeid(C).name() << '\n';
		std::cout << typeid(i).name() << '\n';
		std::cout << typeid(d).name() << '\n';
		std::cout << typeid(Myclass).name() << '\n';
		std::cout << typeid(*this).name() << '\n';
	}
};

int main()
{
	Myclass<Nec> m;  
}


OUTPUT
------
class Nec
class Nec<int>
class Nec<double>
class Myclass<class Nec>
class Mycla
