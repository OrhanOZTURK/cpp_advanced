#include <utility>
#include <iostream>

template<typename ...Args>
auto sum(Args&& ...args)
{
    return (std::forward<Args>(args) + ... + 10);
}

int main()
{
    std::cout << sum(12, 4.5, 50L) << "\n";  //  12 + (4.5 + (50L + 10)) = 76.5
}
