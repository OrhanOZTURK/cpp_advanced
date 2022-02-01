#include "student.h"
#include "manager.h"
#include "employee.h"

void game(Person& p)
{
	p.travel();
}

int main()
{
	Manager m;
	game(m);

	Student s;
	game(s);

	Employee e;
	game(e);

}