#include <iostream>
#include <format>

int main()
{
	using namespace std;

	int x = 47802;

	std::cout << format("{} {} {}\n", "Arda", "Ozlem", "Melih");  // Arda Ozlem Melih

	std::cout << format("{1} {0} {2}\n", "Arda", "Ozlem", "Melih"); // Ozlem Arda Melih

	std::cout << format("{2} {1} {0}\n", "Arda", "Ozlem", "Melih"); // Melih Ozlem Arda

	std::cout << format("{0:b} {0:x} {0:o}\n", x);	// 1011101010111010 baba 135272

	std::cout << format("{2} {1} {0}\n", "Arda", "Ozlem", "Melih", "Tuncay"); // Melih Ozlem Arda. 

	std::cout << format("{2} { } {0}\n", "Arda", "Ozlem", "Melih"); // Syntax Error !
}
