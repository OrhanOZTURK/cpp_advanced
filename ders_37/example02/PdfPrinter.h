#pragma once

#include "printerbase.h"
class PdfPrinter : public PrinterBase {
	PdfPrinter();
public:
	~PdfPrinter();
	static PrinterPtr get_instance();
	virtual void print(const std::string&)override;
};