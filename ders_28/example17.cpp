#include <iostream>
#include <concepts>

void func(std::integral auto x)
{
    std::cout << "1\n";
}
void func(auto x)
{
    std::cout << "2\n";
}
void func(double x)
{
    std::cout << "3\n";
}
int main()
{
    func(1); // 1
    func(1.3F); // 2 
}
