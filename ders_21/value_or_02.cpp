#include <optional>
#include <string>

int main()
{
	using namespace std;

	optional<string> opname{ "Necati Ergin" };

	auto& rs = opname.value_or("no name");//gecersiz
	//geri dönüş değeri referans türü değil
}


