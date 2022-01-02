#include<iostream>
#include<variant>


class Myclass
{
public:
	Myclass(int, int);
};

int main()
{
	using namespace std;

	//variant<Myclass, int, double> v1;				// geçersiz

	variant<monostate, Myclass, int, double> v2;	// gecerli

	variant<Myclass, int, double> v3 = 12;			// gecerli

	variant<Myclass, int, double> v4 = 1.2;			// Valid

	variant<Myclass, int, double> v5 = 4.5f;		//gecerli.Float to double promotion

	//variant<Myclass, int, double> v6 = 5u;			// gecersiz

	variant<Myclass, int, double> v7 = Myclass{ 1,5 };	// Valid

	variant<Myclass, int, double> v8{ in_place_index<0>, 3, 5 };	// gecerli

	variant<Myclass, int, double> v9{ in_place_type<Myclass>,10,15 };	// gecerli
}
