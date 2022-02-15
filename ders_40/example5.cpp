#include <exception>
#include <iostream>
#include <vector>

void func(std::exception_ptr ptr)
{
    try
    {
        std::rethrow_exception(ptr); // Eğer ptr boş ise Undefined Behavior.
    }
    catch(const std::out_of_range& ex)
    {
        std::cout << "hata yakalandi...\n";
        std::cout << ex.what() << '\n';
    }
}

using namespace std;

int main()
{
    vector<int> ivec(10);

    try{
        auto x = ivec.at(20);
    }
    catch(const std::exception& ex)
    {
        std::cout << "exception caught: " << ex.what() << '\n';
        auto eptr = current_exception();
        func(eptr);
    }
}
