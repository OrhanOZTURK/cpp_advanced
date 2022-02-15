#include<iostream>
#include <stdexcept>

void foo()
{
    std::cout << "foo cagrilir\n";
    throw;
}

void func()
{
    try{
        throw std::out_of_range{"range hatasi"};
    }
    catch(const std::exception& ex)
    {
        std::cout << "hata func icinde yakalandi : " << ex.what() << '\n';
        foo();
    }
}

int main()
{
    try
    {
        func();
    }
    catch(const std::out_of_range&)
    {
        std::cout << "hata yakalandi (std::out_of_range)\n";
    }
    catch(const std::exception&)
    {
        std::cout << "hata yakalandi (std::exception)\n";
    }
}
