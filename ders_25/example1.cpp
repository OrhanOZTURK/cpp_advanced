#include <iostream>


enum class rgba_color_channel { red, green, blue, alpha };

std::string_view to_string1(rgba_color_channel channel)
{
	switch (channel)
	{
	case rgba_color_channel::red: return "red";			//Valid
	case rgba_color_channel::green: return "green";		//Valid
	case rgba_color_channel::blue: return "blue";		//Valid
	case rgba_color_channel::alpha: return "alpha";		//Valid
	}
}

std::string_view to_string2(rgba_color_channel channel)
{
	using enum rgba_color_channel;		//Using enum decleration

	switch (channel)
	{
	case red: return "red";		//Valid
	case green: return "green";	//Valid
	case blue: return "blue";	//Valid
	case alpha: return "alpha";	//Valid
	}
}
