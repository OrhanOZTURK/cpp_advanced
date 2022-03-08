#include "pizza.h"

void Pizza::prepare()
{
	prepare_dough();
	add_toppings();
	add_bake();
	add_sauce();	
}