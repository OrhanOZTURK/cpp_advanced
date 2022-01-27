#include <iostream>

class Myclass{
public:
    double func();
    Myclass() = delete;
};
int main()
{
        decltype(std::declval<Myclass>().func()) x{}; // valid
}
//umut kotankıran tarafından aktarıldı
