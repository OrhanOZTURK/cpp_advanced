#include <iostream>
#include <concepts>

template<typename T>
void func(T x)
{
    if constexpr(std::integral<T>)
    {
        std::cout << "integral type\n";
    }
    else if constexpr(std::floating_point<T>)
    {
        std::cout << "floating type\n";
    }
    else
    {
        std::cout << "other type\n";
    }
}
int main()
{
    func(12);  //valid
    func(1.42); // valid
    func(nullptr); // valid
}
