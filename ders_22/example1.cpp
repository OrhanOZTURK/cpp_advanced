#include <iostream>
#include <optional>
#include <string>

std::optional<int> to_int(const std::string& s)
{
  std::optional<int> ret;
	try {
		ret = std::stoi(s);
	}
	catch (...)
	{
	}
	return ret;				
}

int main()
{
	for (auto str : { "345", "987","alican","01555" })
	{
		if (auto op = to_int(str)) {
			std::cout << "gecerli deger : " << *op << "\n";
		}
		else
		{
			std::cout << "gecersiz tamsayi "<< str <<"\n";
		}
	}
}
