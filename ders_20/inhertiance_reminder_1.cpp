#include <iostream>

class Base {
public:

	virtual void vfunc()
	{
		std::cout << "Base::vfunc()\n";
	}
};

class Der : public Base{
private:

	void vfunc() override
	{
		std::cout << "Der::vfunc()\n";
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

	//myder.vfunc(); //gecersiz (access control)
}
