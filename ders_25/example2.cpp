#include <iostream>
#include <format>

int main()
{
	using namespace std;

	int x = 7238423;

	std::cout << format("|{0}|, |{0:d}|\n", x); // |7238423|, |7238423|

	std::cout << format("|{0:x}|, |{0:X}|\n", x); //  |6e7317|, |6E7317|
	
	std::cout << format("|{0:#x}|, |{0:#X}|\n", x); // # sayı sistemi tabanı. |0x6e7317|, |0X6E7317|

	std::cout << format("|{0:o}|, |{0:#o}|\n", x); // Octal.   |33471427|, |033471427||

	std::cout << format("|{0:b}|, |{0:#b}|, |{0:#B}|\n", x); // binary mod. |11011100111001100010111|, |0b11011100111001100010111|, |0B11011100111001100010111|

	std::cout << format("{}  {}\n", true, false); // true  false

	std::cout << format("{:s}  {:s}\n", true, false); // true  false

	std::cout << format("{:b}  {:b}\n", true, false); // 1  0

	std::cout << format("{:#b}  {:#b}\n", true, false); // 0b1  0b0
	
	std::cout << format("{:#B}  {:#B}\n", true, false); // 0B1  0B0

	std::cout << format("{:c}  {:c}\n", true, false); // 

	std::cout << format("{:x}  {:x}\n", true, false); // hex. 1  0

	std::cout << format("{:#x}  {:#x}\n", true, false); // 0x1  0x0

	std::cout << format("{:#X}  {:#X}\n", true, false); // 0X1  0X0
}
