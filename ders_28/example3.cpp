#include <concepts>
#include <iostream>

template<std::integral T>
class Tclass{

};

struct A{};

template<typename T>
concept Nec = requires {
    typename Tclass<T>;
};

int main()
{
    static_assert(Nec<int>); // Valid
    //static_assert(Nec<A>);  // Syntax Error
}
