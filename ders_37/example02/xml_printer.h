#pragma once
#include "printerbase.h"

class XmlPrinter : public PrinterBase {
	XmlPrinter();
public:
	~XmlPrinter();
	static PrinterPtr get_instance();
	virtual void print(const std::string&)override;
};
