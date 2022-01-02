#include <iostream>


enum class rgba_color_channel { red, green, blue, alpha };

std::string_view to_string1(rgba_color_channel channel)
{
	switch (channel)
	{
	case rgba_color_channel::red: return "red";			
	case rgba_color_channel::green: return "green";		
	case rgba_color_channel::blue: return "blue";		
	case rgba_color_channel::alpha: return "alpha";		
	}
}

std::string_view to_string2(rgba_color_channel channel)
{
	using enum rgba_color_channel;		//Using enum decleration

	switch (channel) {
	case red  : return "red";		
	case green: return "green";	
	case blue : return "blue";	
	case alpha: return "alpha";	
	}
}
