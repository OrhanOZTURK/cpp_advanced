#include <string>
#include <optional>
#include <iostream>

std::optional<std::string> get_middle_name(const std::string& rname);

int main()
{
	std::string name;
	//...
	auto op = get_middle_name(name);

	if (op.has_value()) {
		std::cout << "ikinci isim: " << *op << "\n";
		//
	}
	else {
		std::cout << "ikinci isim yok..." << "\n";
	}
}
