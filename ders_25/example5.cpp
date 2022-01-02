#include <iostream>
#include <vector>


struct Time
{
	int min;
	int hour;
};

struct Date
{
	int year;
	int month;
	int day;
	Time time;
	static int hmode; 
};

int main()
{
	Date d1 = { .hmode = 0 }; // Syntax Error
	Date x = { .month = 3, .year = 1998 }; // Syntax Error
	Date x = { 3, .year = 1998 }; // Syntax Error
	Date x = {
		.time.min = 25; // Syntax Error. Nested member access is now allowed.
	};

	Date x = { .time = {32, 4} }; // valid
}
