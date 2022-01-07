#include <concepts>

template<std::convertible_to<int> T>
class Myclass
{

};

int main()
{
    Myclass<int> x; //Valid
    Myclass<std::string> y; //Syntax Error
}
