#include <iostream>
#include <utility>

template<typename ...Args>
auto fdiv_r(Args && ...args)
{
    return (std::forward<Args>(args) / ...);  //unary right fold. (p1 / (p2 / (p3 / p4 )))  perfect forwardingte uygulanacak
}
template<typename ...Args>
auto fdiv_l(Args && ...args)
{
    return (... / std::forward<Args>(args)); //unary left fold (((p1 / p2) / p3) / p4)
}
#include <iostream>
int main()
{
    std::cout << fdiv_r(500, 50, 5, 2) << "\n"; // 20
    std::cout << fdiv_l(500, 50, 5, 2) << "\n"; // 1
}
