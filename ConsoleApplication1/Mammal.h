#pragma once
#include "Animal.h"
class Mammal:
	public Animal
{
public:
	virtual void feed_baby_with_milk() = 0;
	Mammal(const std::string& _name) : Animal(_name) {};
};

