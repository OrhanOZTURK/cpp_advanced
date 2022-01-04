#include <iostream>
#include <format>

int main()
{
	using namespace std;

	double dval = 1545687234.5213213214325678912;

	cout << format("{}\n", dval); // 1545687234.5213213

	cout << format("{:f}\n", dval); // 1545687234.521321

	cout << format("{:E}\n", dval); // 1.545687E+09

	cout << format("{}\n", "necati ergin"); // necati ergin

	cout << format("{:s}\n", "necati ergin"); //  necati ergin

	cout << format("{:s}\n", "10 > 5"); // 10 > 5

	//------------------------------------------------------------------------------------------------------

	int x = 7894;
	cout << format("|{:18}| {}", x, "ali") << "\n"; //  |              7894| ali

	cout << format("|{:<18}| {}", x, "ali") << "\n"; // |7894              | ali

	cout << format("|{:>18}| {}", x, "ali") << "\n"; 	// |              7894| ali

	cout << format("|{:^18}| |{}|", x, "ali") << "\n";  // |       7894       | |ali|

	cout << format("|{:!<18}| {}", x, "ali") << "\n";    // |7894!!!!!!!!!!!!!!| ali

	cout << format("|{:$>18}| {}", x, "ali") << "\n"; // |$$$$$$$$$$$$$$7894| ali

	cout << format("|{:.^18}| |{}|", x, "ali") << "\n";  // |.......7894.......| |ali|

	cout << format("|{:6}|", "NECATI ERGIN") << "\n"; // |NECATI ERGIN|

	//------------------------------------------------------------------------------------------------------

	int y = 6;

	cout << format("|{:.{}}|", "NECATI ERGIN", y) << "\n"; // |NECATI|

	//------------------------------------------------------------------------------------------------------

	int z = 762374;
	cout << format("|{:15x}|", z) << "\n"; // |          ba206|

	cout << format("|{:15X}|", z) << "\n"; // |          BA206|

	cout << format("|{:<#15X}|", z) << "\n"; // |0XBA206        |

	cout << format("|{:_<#15x}|", z) << "\n"; // |0xba206________|

}
