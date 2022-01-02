#include <iostream>
#include <vector>

struct A { int x, y; };

int main()
{
	struct A a = { .y = 1, .x = 3 }; // Error
	int ar[] = { [2] = 6 }; // Error
	struct B b = { .a.x = 10 }; // Error
	struct A a2 = { .x = 5, 34 }; // Error
	struct A a3 = { .x = 5, .x = 42 }; // Error
}
