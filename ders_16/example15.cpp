#include <iostream>

template <typename ...Types>
class Myclass{
public:
    Myclass()
    {
        std::cout << typeid(Myclass).name() << "\n";
    }
};

template <typename ...Ts>
void func(Ts ...args)
{
    Myclass<Ts ...>x;
}
int main()
{
    func(1,2.3,"dogukan"); // class Myclass<int,double,char const *>
}
