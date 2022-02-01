#pragma once

#include<functional>
#include<unordered_map>
#include "printerbase.h"

using CreatorFunc = std::function<PrinterPtr()>; // PrinterPtr() bir func türü. 

class PrinterProvider {
	struct InstanceData {
		PrinterPtr m_printer;
		CreatorFunc m_creator;
	};
	inline static std::unordered_map<std::string, InstanceData> mprinter_map{};
public:
	static void register_creator(const std::string& key, CreatorFunc func);
	static PrinterPtr get_printer(const std::string& key);
};