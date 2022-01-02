#include <iostream>
#include <vector>

struct Point
{
	double x;
	double y;
	double z;
};

int main()
{
	using namespace std;
	Point a;
	a.x = 3.4;
		
	Point p = { .x = 3, .y = 5, .z = 5 }; 
	std::vector<Point> pvec;

	pvec.push_back(Point{ .x = 1.1, .y = 2.2, .z = 3.3 }); 

	pvec.push_back(Point{ .x = {1.1}, .y = {2.2}, .z = {3.3} }); 
}
