#include<iostream>
#include<ranges>
#include<compare>
#include<vector>
#include<algorithm>
#include<format>
#include"nutility.h"


struct Employee {
	Employee() = default;
	Employee(std::string name, std::string surname, int id) : m_name{ std::move(name) }, m_surname{ std::move(surname) } { }

	auto operator<=> (const Employee&)const = default;

	std::string m_name;  
	std::string m_surname;
	int mid{};
};

int main()
{
	using namespace std;
	vector<Employee> evec;
	for (int i = 0; i < 1000; ++i)
	{
		evec.emplace_back(rname(), rfname(), Irand{ 0,100000 }());
	}
	
	sort(evec.begin(), evec.end()); //valid
	
	ranges::sort(evec, {}, &Employee::m_name); // Valid
	
	ranges::sort(evec, {}, [](const Employee& e) { return e.m_name + e.m_surname; }); // valid

}
