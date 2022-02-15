#include<iostream>
#include <stdexcept>

void func()
{
    try{
        throw std::out_of_range{"range hatasi"};
    }
    catch(const std::exception& ex)
    {
        std::cout << "hata func icinde yakalandi : " << ex.what() << '\n';
        throw ex; // Object Slicing. Dinamik tür korunmaz

        throw;   // exception rethrow. Dinamik tür korunur
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
