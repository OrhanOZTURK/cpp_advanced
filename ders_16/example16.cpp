#include <iostream>

template<typename ...TS>
class Var {
public:
    Var()
    {
        std::cout << typeid(Var).name() << "\n";
    }
};
template <typename ...Types>
class Myclass : public Var<Types...>
{
public:
    constexpr static size_t size = sizeof...(Types);
};
int main()
{
    constexpr auto n = Myclass<int, double>::size; // 2

    constexpr auto m = Myclass<int, double, long, char>::size; //4

    std::cout << n << ' ' << m <<'\n';
}
