#include <iostream>

template <typename ...TS>
auto leftfunc(TS ...args)
{
    return (... || args); 
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << leftfunc(); // false
}
