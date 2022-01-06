#include <concepts>
#include <iostream>
#include <memory>

template<typename T1, typename T2>
concept nec = requires(T1 x, T2 y)
{
    x > y && *x < *y;
};

int main()
{
    static_assert(nec<int,double>); // Syntax Error
    static_assert(nec<int*,int*>); // Valid    
}
