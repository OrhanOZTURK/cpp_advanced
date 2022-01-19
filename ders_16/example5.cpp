#include <iostream>

template<typename... T>
auto sum_left(T... args)
{
    return (... + args); // Unary left fold
}

template<typename... T>
auto sum_right(T... args)
{
    return (args + ...); // Unary right fold
}

int main()
{
    using namespace std::literals;

    auto x = sum_left(1, 3, 5, 7, 9); // Valid
    std::cout << "x = " << x << "\n";

    auto y = sum_right(1, 3, 5, 7, 9); // Valid
    std::cout << "y = " << y << "\n";

    auto sx = sum_left("ali"s, "can", " usta", "oglu"); // Valid. string + cstring
    std::cout << "sx = " << sx << "\n";

    //auto sy = sum_right("ali"s, "can", " usta", "oglu"); // Syntax error. cstring + cstring

    auto sz = sum_right("ali"s, "can", " usta"s, "oglu"); // Valid. string + cstring
    std::cout << sz << '\n';

}
