#include <iostream>

class Base {
public:
	void foo()
	{
		//code
		vfunc();
		// code
	}
private:
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


int main()
{
	Der myder;

	myder.foo();
}
