#include <iostream>
#include <format>

int main()
{
	using namespace std;

	cout << format("{}\n", 10 > 5); // true
	cout << format("{:d}\n", 10 > 5); // 1
	cout << format("{}\n", 65); // 65
	cout << format("{:c}\n", 65); // A
	cout << format("{}\n", 'A'); // A

	string name{ "Necati Ergin" };
	cout << format("|{}|", name) << '\n'; // Necati Ergin

	//----------------------------------------------------------------------------------------------
	
	name = { "murat hepeyiler" };
	cout << format("{}", name) << '\n'; //	murat hepeyiler
	cout << format("|{:24s}|", name) << "\n"; // |murat hepeyiler		|   
	cout << format("|{:<24s}|", name) << "\n"; // |murat hepeyiler		|
	cout << format("|{:>24s}|", name) << "\n"; // |	     murat hepeyiler|
	cout << format("|{:^24s}|", name) << "\n"; // |   murat hepeyiler   |
	cout << format("|{:.^24s}|", name) << "\n"; // |....murat hepeyiler....|
	cout << format("|{:<24.5s}|", name) << "\n"; // |murat				|
	cout << format("|{:+>24.5s}|", name) << "\n"; // |+++++++++++++murat|
	cout << format("|{:!^24.5s}|", name) << "\n"; // |!!!!!!murat!!!!!!|
	
	//----------------------------------------------------------------------------------------------

	int x{};
	std::cout << &x << "\n"; // burada void* parametreli func çağrılır

	//std::cout << format("{}", &x) << "\n"; // Syntax Error.
	//std::cout << format("{:p}", &x) << "\n"; // Syntax Error.

	std::cout << format("{}", (void*)&x) << "\n"; // 00000076D96FD824
	std::cout << format("{:p}", (void*)&x) << "\n"; // 0x76d96fd824
	std::cout << format("{:p}", static_cast<void*>(&x)) << "\n";  // 0x76d96fd824

	std::cout << format("{}", nullptr) << "\n"; // 0x0
	std::cout << format("{:p}", nullptr) << "\n"; // 0x0

	//----------------------------------------------------------------------------------------------

	std::cout << format("{:x}", 47802) << '\n'; // baba 
	std::cout << format("{:X}", 47802) << '\n'; // BABA
	std::cout << format("{:#x}", 47802) << '\n'; // 0xbaba
	std::cout << format("{:#X}", 47802) << '\n'; // 0XBABA
	std::cout << format("{:b}", 47802) << '\n'; // 1011101010111010
	std::cout << format("{:#b}", 47802) << '\n'; // 0b1011101010111010
	std::cout << format("{:o}", 47802) << '\n'; // 135272
	std::cout << format("{:#o}", 47802) << '\n'; // 0135272
	std::cout << format("{:f}", 5.) << '\n'; //  5.000000
	std::cout << format("{:#f}", 5.) << '\n'; // 5.000000

	//----------------------------------------------------------------------------------------------

	double dval = 3. / 7;
	int width = 12;
	int precision = 5;

	std::cout << format("|{2:<{0}.{1}f}|", width, precision, dval);    //  |0.42857     |
}
