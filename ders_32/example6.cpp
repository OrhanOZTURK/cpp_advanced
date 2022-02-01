//umut kotankıran tarafından aktarıldı

#include <utility>  //std::declval

class Myclass{
public:
    double func();
    Myclass() = delete;
};

int main()
{
    decltype(std::declval<Myclass>().func()) x{}; // valid
}

