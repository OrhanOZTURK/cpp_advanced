class Myclass {
public:
	enum class Color { red, green, blue };
};

int main()
{
	using enum Myclass::Color; //valid
	auto x = green;	//valid
	auto y = red;	//valid
	auto z = blue;	//valid
}
