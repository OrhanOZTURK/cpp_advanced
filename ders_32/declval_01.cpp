//umut kotankıran tarafından aktarıldı

class Myclass {
public:
    double func();
    Myclass() = delete;
};
int main() {
    decltype(Myclass{}.func()) x{}; // invalid. Myclass has no defualt ctor
}
