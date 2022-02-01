#include "mercedes.h"
#include <iostream>

Mercedes::Mercedes()
{
	std::cout << "Mercedes olusturuldu\n";
}
Mercedes::~Mercedes()
{
	std::cout << "Mercedes yok edildi\n";
}
void Mercedes::start()
{
	std::cout << "Mercedes has started!\n";
}
void Mercedes::run()
{
	std::cout << "Mercedes is running!\n";
}
void Mercedes::stop()
{
	std::cout << "Mercedes has stopped!\n";
}