#pragma once
#include <vector>
#include "Animal.h"
class Zoo
{
private:
	std::vector<Animal*> animal;

public:
	void add(Animal* a);
	void listen();
	void do_something();
	int get_count_bird();

	Zoo() {}
};

