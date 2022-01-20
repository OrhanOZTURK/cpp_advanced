#include <iostream>

template <typename ...TS>
auto leftfunc(TS ...args)
{
    return (0 + ... + args);
}

int main()
{
    std::cout << std::boolalpha;

    std::cout << leftfunc(); // valid code => 0
}
