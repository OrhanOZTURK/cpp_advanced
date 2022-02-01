#include <concepts>

//umut kotankıran tarafından aktarıldı

template<std::integral T> // T is type parameter
class Myclass {

};

int main()
{
	//Myclass<double> x; //gecersiz
	Myclass<int> y; //gecersiz
}
