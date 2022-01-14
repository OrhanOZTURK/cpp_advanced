#include <iostream>
#include <ranges>
#include <list>
#include <string>
#include "nutility.h"

using namespace std;

int main()
{
	list<string> slist;
	rfill(slist, 10, rname);
	print(slist);

	for (auto x : views::reverse(slist) | views::take(5))
	{
		std::cout << x << ' ';
	}
	std::cout << '\n';
}
