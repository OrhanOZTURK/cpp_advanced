#include <compare>
#include <iostream>

using namespace std;

int main()
{
	cout << boolalpha;

	cout << (strong_ordering::less < 0) << "\n";     // true
	cout << (strong_ordering::less <= 0) << "\n";     // true
	cout << (strong_ordering::less == 0) << "\n";     // false
	cout << (strong_ordering::less != 0) << "\n";     // true
	cout << (strong_ordering::less >= 0) << "\n";     // false
	cout << (strong_ordering::less >= 0) << "\n";     // false

	cout << (strong_ordering::greater < 0) << "\n";     // false
	cout << (strong_ordering::greater <= 0) << "\n";     // false
	cout << (strong_ordering::greater == 0) << "\n";     // false
	cout << (strong_ordering::greater != 0) << "\n";     // true
	cout << (strong_ordering::greater >= 0) << "\n";     // true
	cout << (strong_ordering::greater >= 0) << "\n";     // true

	cout << (partial_ordering::unordered < 0) << "\n";     // false
	cout << (partial_ordering::unordered <= 0) << "\n";     // false
	cout << (partial_ordering::unordered == 0) << "\n";     // false
	cout << (partial_ordering::unordered != 0) << "\n";     // true
	cout << (partial_ordering::unordered >= 0) << "\n";     // false
	cout << (partial_ordering::unordered >= 0) << "\n";     // false	
}
