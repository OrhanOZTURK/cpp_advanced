#include "logger.h"
#include <iostream>

CONSTINIT Logger logger;
void Logger::log(std::string_view msg)
{
	if (!m_ofs)	
		m_ofs.emplace("log.txt");

	*m_ofs << msg << '\n';
	std::cout << msg << '\n';
}
