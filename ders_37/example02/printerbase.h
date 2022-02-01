#pragma once

#include<string>
#include<memory>
class PrinterBase {
protected:
	PrinterBase() = default;
public:
	virtual ~PrinterBase() = default;
	PrinterBase(const PrinterBase&) = delete;
	PrinterBase& operator=(const PrinterBase&) = delete;
	virtual void print(const std::string&) = 0;
};
using PrinterPtr = std::shared_ptr<PrinterBase>;
