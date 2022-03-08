#include <iostream>

template<typename T>
class Nec {

};

template<template<typename> class C>
class Myclass {

};

int main()
{
	Myclass<int> x; // Invalid
	Myclass<Nec> x; // Valid
}
