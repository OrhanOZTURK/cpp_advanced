#include <iostream>

template<typename T, typename U>
class Nec {
};

template<typename T>
class Nec2 {
};

template<template<typename, typename> typename C>
class Myclass {

};
int main()
{
	Myclass<Nec> x; // Valid
	Myclass<Nec2> x; // Invalid
}
