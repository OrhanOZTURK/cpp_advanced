#include <iostream>
#include <vector>
#include <algorithm>

struct Employee
{
	std::string name;
	int id;
};

struct Payslip
{
	std::string pay_info;
	int id;
};



int main()
{
	using namespace std;

	vector<Employee> evec(100);
	vector<Payslip> pvec(100);

	ranges::sort(evec, ranges::less{}, [](const Employee& e) { return e.id; }); 
	ranges::sort(pvec, ranges::less{}, [](const Payslip& e) { return e.id; });

	auto b = ranges::equal(evec, pvec, ranges::equal_to{}, 
			       [](const Employee& e) { return e.id; }, [](const Payslip& p) { return p.id; });
}
