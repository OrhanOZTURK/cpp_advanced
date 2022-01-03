#include <iostream>

template<typename T>
struct Nec {
	explicit(false) Nec(T); // C++20. Constructor is not explicit
	
	//explicit(true) Nec(T); // C++20. Constructor is explicit
	
	//explicit(std::is_integral_v<T>)Nec(T); // C++20
};
