#include <iostream>
#include <vector>
#include <variant>


class Circle {
public:
	void render()
	{
		std::cout << "circle is being rendered\n";
	}
};

class Square {
public:
	void render()
	{
		std::cout << "Square is being rendered\n";
	}
};

class Triangle {
public:
	void render()
	{
		std::cout << "Triangle is being rendered\n";
	}
};

class Polygon {
public:
	void render()
	{
		std::cout << "Polygon is being rendered\n";
	}
};

using shape = std::variant<Circle, Square, Triangle, Polygon>;

int main()
{
	using namespace std;

	vector<shape> svec;
	svec.emplace_back(Circle{});
	svec.emplace_back(Square{});
	svec.emplace_back(Triangle{});
	svec.emplace_back(Polygon{});


	for (auto& object : svec)
	{
		visit([](auto& object) {object.render(); }, object);
	}
}
