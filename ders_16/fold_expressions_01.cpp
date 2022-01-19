#include <iostream>

template <typename ...TS>
auto leftfunc(TS ...args)
{
    return (... && args);  //unary left fold
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << leftfunc(true, true, true) << '\n'; // true

    std::cout << leftfunc() << '\n';  //true
}
