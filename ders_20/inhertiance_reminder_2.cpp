#include <iostream>

class Base {
public:

	virtual void vfunc(int x = 10)
	{
		std::cout << "Base::vfunc(int x) x = " << x << "\n";
	}
};

class Der : public Base{
public:

	void vfunc(int x = 55) override
	{
		std::cout << "Der vfunc(int x) x = " << x << "\n";
	}
};

void foo(Base& base)
{
	base.vfunc();
}

int main()
{
	Der myder;
	foo(myder);
}
