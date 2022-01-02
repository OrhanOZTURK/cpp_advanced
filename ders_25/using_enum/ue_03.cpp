class Myclass {
public:
	enum Color { red, green, blue };
};

int main()
{
	using enum Myclass::Color; //valid
	auto x = green;	//valid
	auto y = red;	//valid
	auto z = blue;	//valid
}
