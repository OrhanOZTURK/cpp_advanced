#include <concepts>

template<typename T, std::convertible_to<T> auto x>
class Myclass{

};

int main()
{
    Myclass<int, 5> x; // Valid
    //Myclass<std::string, 5> y; // Syntax Error
}
