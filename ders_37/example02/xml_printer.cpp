#include "xml_printer.h"
#include <iostream>

XmlPrinter::XmlPrinter()
{
    std::cout << "XML Printer olusturuldu\n";
}
XmlPrinter::~XmlPrinter()
{
    std::cout << "XML Printer yok edildi\n";
}
PrinterPtr XmlPrinter::get_instance()
{
    static PrinterPtr ptr{ new XmlPrinter{} };
    return ptr;
}
void XmlPrinter::print(const std::string& str)
{
    std::cout << "Xml Printer : " << str << '\n';
}
