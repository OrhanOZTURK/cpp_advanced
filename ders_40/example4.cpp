#include <iostream>
#include <stdexcept>

class Member
{
public:
    Member(int)
    {
        std::cout << "Member default ctor\n";
        throw 1;
    }
};

class Nec
{
public:
    Nec() try : mx{12}
    {

    }
    catch(int)
    {
        std::cout << "exception caught\n";

        //// .. Burada hiçbir şey yapılmazsa exception rethrow eder.
        throw;  // Burada da yukarıdaki gibi exception rethrow eder.

        throw std::runtime_error{"member exception"}; // Başka bir exception gönderildi
    }
private:
    Member mx;
};

int main()
{
    Nec mynec;
}
