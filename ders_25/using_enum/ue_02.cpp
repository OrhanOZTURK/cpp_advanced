enum class rgba_color_channel { red, green, blue, alpha };

int main()
{
	auto red = rgba_color_channel::red;
	auto x = red;	//valid

	using rgba_color_channel::green;
	auto y = green;	//valid
}
