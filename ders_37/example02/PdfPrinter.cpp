#include<iostream>
#include "PdfPrinter.h"

PdfPrinter::PdfPrinter()
{
	std::cout << "PDF printer olusturuldu\n";
}
PrinterPtr PdfPrinter::get_instance()
{
	return PrinterPtr{ new PdfPrinter{} };
}
void PdfPrinter::print(const std::string& str)
{
	std::cout << "PDF Printer : " << str << '\n';
}

PdfPrinter::~PdfPrinter()
{
	std::cout << "PDF printer yok edildi\n";
}