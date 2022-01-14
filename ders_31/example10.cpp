#include <iostream>
#include <ranges>
#include <vector>
#include <list>
#include <string>
#include <iomanip>
#include "nutility.h"

using namespace std;

int main()
{
	list<string> slist;
	rfill(slist, 20, rname);
	
	print(slist);
	size_t len;
	std::cout << "uzunluk değeri girin: ";
	cin >> len;
	
	auto v = views::drop_while(slist, [len](const string& s) {return s.size() > len; });
	ranges::for_each(v, [](const auto& s) { std::cout << quoted(s) << " "; });
}
