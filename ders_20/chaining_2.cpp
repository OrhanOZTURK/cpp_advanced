#include <ostream>

class Printer
{
public:
    Printer(std::ostream& pstream) : m_stream(pstream) {}

    template <typename T>
    Printer& print_line(const T& t)
    {
        m_stream << t << '\n';
        return *this;
    }
private:
    std::ostream& m_stream;
};

#include <iostream>


class ConsolePrinter : public Printer
{
public:
    ConsolePrinter() : Printer(std::cout) {}

    ConsolePrinter& set_color(int color)
    {
        std::cout << "console color set\n";
        return *this;
    }
};



using namespace std;

#include <iostream>

int main()
{
    ConsolePrinter().print_line("Necati ").set_color(12).print_line("Ergin"); // invalid
}
