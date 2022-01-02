#include <iostream>
#include <string>
#include <variant>

int main()
{
	using namespace std;

	using age_t = int;
	using weight_t = double;
	using name_t = std::string;

	std::variant<age_t, weight_t, name_t> vx;

	vx = 26;
	std::cout << "yas = " << get<age_t>(vx) << "\n";

	vx = 87.56;
	std::cout << "agirlik = " << get<weight_t>(vx) << "\n";

	vx = "Ali Aksoy";
	std::cout << "isim = " << get<name_t>(vx) << "\n";
}
