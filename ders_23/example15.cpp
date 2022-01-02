#include <iostream>
#include <any>
#include <string>
#include <set>


class Nec {
public:
	Nec(int a, int b) : ma(a), mb(b) { }

private:
	int ma, mb;
};

int main() {

	using namespace std;

	any a;

	a = 45;  // valid
	a = Nec{ 3,5 }; // valid

	a.emplace<Nec>(4, 6); // valid

	a.emplace<string>(100, 'A'); // valid

	auto pred = [](int a, int b) { return std::abs(a) < std::abs(b);  };

	a.emplace<set<int, decltype(pred)>>({ 1, 4, 7 ,9 }, pred); // Compatible with C++17. // valid

}
