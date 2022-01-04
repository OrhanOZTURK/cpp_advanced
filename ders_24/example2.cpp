#include <iostream>

class Mint
{
public:
    Mint(int x = 0) : mx(x) { }
    bool operator==(const Mint &other)const = default;
private:
    int mx;
};

int main()
{
    Mint m1{2}, m2{6};
    auto b1 = m1 == m2; // C++20 Valid
    auto b2 = m1 != m2; // C++20 Valid
}
