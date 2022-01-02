#include <iostream>
#include <variant>
#include <string>
#include "date.h"

int main()
{
	using namespace std;

	variant<Date, int, double, string> vx; // geçerli
	vx = "Ali";			       // geçerli - alternatif string
	get<0>(vx) = Date{ 1,5,1987 };	       // geçerli
	get<Date>(vx) = Date{ 1,5,1987 };      // geçerli
	cout << get<Date>(vx) << "\n";         // geçerli
	// cout << get<float>(vx);	      // geçersiz. float bir alternatif değil
	cout << get<4>(vx);		       // geçersiz. index 4 yok
}
