#include "factory.h"

int main()
{
	auto p = create_student("Harun", "Bozaci");
	p->add_grade(12);
	p->add_grade(45);
	p->add_grade(99);
	p->print();
	delete p;
}