#include <iostream>

#include <iostream>
template<typename ...TS>
class Var {
public:
    Var()
    {
        std::cout << typeid(Var).name() << '\n';
    }
};

template <typename ...Types>
class Myclass : public Var<Types* ...> { };  // class Var<int*, double*, long *>

int main()
{
    Myclass<int, double, long> x;  
}
