#include "html_printer.h"
#include "xml_printer.h"
#include "Pdfprinter.h"
#include "printer_provider.h"
int main()
{
    PrinterProvider::register_creator("xml", &XmlPrinter::get_instance);
    PrinterProvider::register_creator("html", &HtmlPrinter::get_instance);
    PrinterProvider::register_creator("pdf", &PdfPrinter::get_instance);
    auto p1 = PrinterProvider::get_printer("xml");
    if (p1)
    {
        p1->print("singleton is an antipattern!");
    }
    auto p2 = PrinterProvider::get_printer("xml");
    if (p2)
    {
        p2->print("necati ergin\n");
    }
   
}
