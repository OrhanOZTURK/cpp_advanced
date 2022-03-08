#include <iostream>

template<typename T, int>
class Nec {
};

template<template<typename, int> typename C>
class Myclass {
};
int main()
{
	Myclass<Nec> x; // Valid
}
