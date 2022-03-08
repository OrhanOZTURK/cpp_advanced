#pragma once

#include<string>

class Pizza
{
public:
	Pizza(std::string name);
	~Pizza() = default;
	void prepare();  //NVI
protected:
	void prepare_dough();
	virtual void add_sauce();
	virtual void add_bake();
private:
	virtual void add_toppings() = 0;
};
