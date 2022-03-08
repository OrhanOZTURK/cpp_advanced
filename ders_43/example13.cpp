#include <iostream>

template <typename T>
class Myclass
{
public:

};

template<template<typename> class T = Myclass>
class A
{
};

int main()
{
	A<Myclass> x; //valid
	A x;	// valid.
}
