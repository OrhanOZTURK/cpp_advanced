#include <iostream>
#include <concepts>

template <std::integral ...Args>
bool All(Args ...args)
{
    return (... && args); // unary left fold
}
int main()
{
    std::cout << std::boolalpha;

    std::cout << All(12,3L,'A',true); // Valid
    std::cout << All(1.2,3L,'A',true); // Syntax Error
}
