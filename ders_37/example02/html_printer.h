#pragma once

#include "printerbase.h"

class HtmlPrinter : public PrinterBase {
	HtmlPrinter();
public:
	~HtmlPrinter();
	static PrinterPtr get_instance();
	virtual void print(const std::string&)override;
};