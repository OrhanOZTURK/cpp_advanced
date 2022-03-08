#include <iostream>
#include <vector>

template<template<typename, typename> typename C>
class Myclass {

};
int main()
{
	Myclass<std::vector> x; //valid
}
