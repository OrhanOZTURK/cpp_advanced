#include <iostream>

template<typename T, typename... Ts>
int subtract(T init, Ts... args)
{
    return (init - ... - args); //Binary left fold
}
int main()
{
    int result = subtract(100, 50, 20, 7); // 'result' is (((100 - 50) - 20) - 7) = 23
    std::cout << "result = " << result << "\n";
}
