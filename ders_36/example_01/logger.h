#pragma once

#include <optional>
#include <fstream>
#include <string_view>

#if defined (__cpp_constinit)
#define CONSTINIT  constinit
#else
#define CONSTINIT
#endif


class Logger {
public:
	constexpr Logger() = default;
	void log(std::string_view msg);
private:
	std::optional<std::ofstream> m_ofs;
};

extern Logger; //declaration
