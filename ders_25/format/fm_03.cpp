#include <iostream>
#include <format>

int main()
{
	using namespace std;

	int x = 7238423;

	cout << format("|{0}|, |{0:d}|\n", x); // |7238423|, |7238423|

	cout << format("|{0:x}|, |{0:X}|\n", x); //  |6e7317|, |6E7317|

	cout << format("|{0:#x}|, |{0:#X}|\n", x); // # sayı sistemi tabanı. |0x6e7317|, |0X6E7317|

	cout << format("|{0:o}|, |{0:#o}|\n", x); // Octal.   |33471427|, |033471427||

	cout << format("|{0:b}|, |{0:#b}|, |{0:#B}|\n", x); // binary mod. |11011100111001100010111|, |0b11011100111001100010111|, |0B11011100111001100010111|

	cout << format("{}  {}\n", true, false); // true  false

	cout << format("{:s}  {:s}\n", true, false); // true  false

	cout << format("{:b}  {:b}\n", true, false); // 1  0

	cout << format("{:#b}  {:#b}\n", true, false); // 0b1  0b0

	cout << format("{:#B}  {:#B}\n", true, false); // 0B1  0B0

	cout << format("{:c}  {:c}\n", true, false); // 

	cout << format("{:x}  {:x}\n", true, false); // hex. 1  0

	cout << format("{:#x}  {:#x}\n", true, false); // 0x1  0x0

	cout << format("{:#X}  {:#X}\n", true, false); // 0X1  0X0
}
