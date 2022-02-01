#include<iostream>
#include "html_printer.h"
HtmlPrinter::HtmlPrinter()
{
	std::cout << "Html printer olusturuldu\n";
}
HtmlPrinter::~HtmlPrinter()
{
	std::cout << "Html printer yok edildi\n";
}
PrinterPtr HtmlPrinter::get_instance()
{
	static PrinterPtr ptr{ new HtmlPrinter{} };
	return ptr;
}
void HtmlPrinter::print(const std::string& str)
{
	std::cout << "Html Printer : " << str << '\n';
}