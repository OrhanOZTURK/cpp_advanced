
#include "printer_provider.h"
#include <iostream>
void PrinterProvider::register_creator(const std::string& key, CreatorFunc func)
{
	if (!mprinter_map.contains(key))
	{
		mprinter_map[key].m_creator = func; 
		std::cout << key << " singletonu kayit edildi\n";
	}
	else 
	{
		std::cout << "daha önce kayit edilmis durumda\n";
	}
}
PrinterPtr PrinterProvider::get_printer(const std::string& key)
{
	if (mprinter_map.contains(key))
	{
		if (!mprinter_map[key].m_printer)
		{
			mprinter_map[key].m_printer = mprinter_map[key].m_creator();
		}
		return mprinter_map[key].m_printer;
	}
	std::cout << "yanlis anahtar degeri\n";
	return {}; // return nullptr aslında bu.
}