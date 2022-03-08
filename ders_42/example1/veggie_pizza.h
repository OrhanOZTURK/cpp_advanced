#pragma once

#include "pizza.h"
class Veggie : public Pizza
{
public:
	using Pizza::Pizza;
	virtual void add_sauce()override;
	virtual void add_bake()override;
private:
	virtual void add_toppings()override;   // implementasyonları yapmıyoruz
protected:
};