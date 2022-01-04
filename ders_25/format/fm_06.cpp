#include <iostream>
#include <format>


int main()
{
	using namespace std;

	cout << format("|{0}|\n", 94); // |94|
	
	cout << format("|{0}|\n", -94); // |-94|

	cout << format("|{0}| |{0:-}|\n", 94); // |94| |94|
	
	cout << format("|{0}| |{0:-}|\n", -94); // |-94| |-94|

	cout << format("|{0}| |{0: }|\n", 94); // |94| | 94|

	cout << format("|{0}| |{1: }|\n", 94, -45); // | 94| |-45|
}
