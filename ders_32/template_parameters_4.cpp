//umut kotankıran tarafından aktarıldı

#include <concepts>
#include <iostream>

template<typename T, std::convertible_to<T> auto x>
class Myclass{
    //...
};

int main()
{
    Myclass<int,10L> x; // Valid. Visual studio has bug
}

