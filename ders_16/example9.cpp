#include <iostream>
#include <utility>
#include <string>
#include <bitset>

template<typename ...Args>
void fprint(Args&& ...args)
{
    (std::cout << ... << std::forward<Args>(args)) << " " << '\n'; // binary left fold.
}

int main()
{
    std::string name{ "Necati" };
    std::bitset<8> bs{ 15u };
    fprint(name, 12, 4.5, "Tahsin", bs); // Necati124.5Tahsin00001111
}
