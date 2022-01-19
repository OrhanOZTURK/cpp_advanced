#include <iostream>

template<typename... Args>
bool all(Args... args)
{
    return (... && args);
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << all(true, true, true, true) << "\n";  // (((true && true) && true) && true) && true  ==> TRUE
    std::cout << all(true, true, true, false) << "\n"; // (((true && true) && true) && true) && false  ==> FALSE
}
