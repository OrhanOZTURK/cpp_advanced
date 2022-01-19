#include <iostream>

template <std::size_t ...n>
class Myclass{
public:
    Myclass()
    {
        std::cout << typeid(Myclass).name() << "\n";
    }
};

template <std::size_t ...n>
void func()
{
    Myclass<n...> x;
}

int main()
{
    func<1,3,5,7>(); // class Myclass<1,3,5,7>
}
