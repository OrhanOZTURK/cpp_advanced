#include <iostream>


enum class rgba_color_channel { red, green, blue, alpha };

int main()
{
	auto red = rgba_color_channel::red; 
	red;	//valid
	
	using rgba_color_channel::green; 
	green;	//valid
}

//--------------------------------------------------------------------------

#include <iostream>

class Myclass {
public:
	enum Color { red, green, blue };
};

int main()
{
	using enum Myclass::Color; //valid
	auto c = green;	//valid
	auto d = red;	//valid
}
