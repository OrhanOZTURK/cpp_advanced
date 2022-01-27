class Myclass{
public:
    double func();
    Myclass() = delete;
};
int main() {
    decltype(Myclass{}.func()) x{}; // Syntax Error 
}
//umut kotankıran tarafından aktarıldı
