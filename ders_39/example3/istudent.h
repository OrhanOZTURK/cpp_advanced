#pragma once

#include<string>
#include<vector>
//other include
class IStudent
{
public:
	virtual ~IStudent() = default;
	virtual void add_grade(int) = 0;
	virtual void print()const = 0;
};
