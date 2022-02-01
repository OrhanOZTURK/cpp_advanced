#include "bmw.h"
#include <iostream>

Bmw::Bmw()
{
	std::cout << "Bmw olusturuldu\n";
}

Bmw::~Bmw()
{
	std::cout << "Bmw yok edildi\n";
}

void Bmw::start()
{
	std::cout << "Bmw has started\n";
}

void Bmw::run()
{
	std::cout << "Bmw has run\n";
}

void Bmw::stop()
{
	std::cout << "Bmw has stop\n";
}
