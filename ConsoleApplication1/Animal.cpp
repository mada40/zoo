#include "Animal.h"

Animal::Animal(const std::string& _name)
{
	count_animals++;
	id = count_animals;
	name = _name;
}

Animal::~Animal()
{
	count_animals--;
}

std::string Animal::get_name()
{
	return name;
}

int Animal::get_id()
{
	return id;
}