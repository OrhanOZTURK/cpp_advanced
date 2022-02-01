//umut kotankıran tarafından aktarıldı

#include <concepts>

template<std::integral auto x> //non-type parameter
class Myclass {
};

int main()
{
	//Myclass<5.5> x; // invalid
	Myclass<10> y; // valid
}
