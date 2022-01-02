#include<iostream>
#include<variant>
#include<utility>

using dpair = std::pair<double, double>;
using roots = std::variant<dpair, double, std::monostate>;

roots get_roots(double a, double b, double c)
{
	auto delta = b * b - 4. * a * c;
	if (delta > 0.)
	{
		auto rootdelta = std::sqrt(delta);
		return std::make_pair((-b - rootdelta) / (2. * a), (-b + rootdelta) / (2. * a));
	}
	if (!delta)
	{
		return -b / 2. / a;
	}
	return std::monostate{};
}

//VISITER
struct RootPrint {
	void operator()(const dpair& param)const
	{
		std::cout << "iki kok var : " << param.first << " " << param.second << "\n";
	}
	void operator()(double param)const
	{
		std::cout << "tek kok var : " << param << "\n";
	}
	void operator()(std::monostate)const
	{
		std::cout << "kok yok : \n";
	}
};


int main()
{
	visit(RootPrint{}, get_roots(1, 10., 16));
	visit(RootPrint{}, get_roots(3., 9., 8));
	visit(RootPrint{}, get_roots(1., 8., 16));
}
