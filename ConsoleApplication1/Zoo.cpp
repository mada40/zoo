#include "Zoo.h"
#include "Bird.h"
#include "Mammal.h"
#include <iostream>
void Zoo::add(Animal* a)
{
	animal.push_back(a);
}

void Zoo::listen()
{
	for (auto a : animal)
	{
		std::cout << a->get_name() << " :\n";
		a->listen();
	}
}

void Zoo::do_something()
{
	for (auto a : animal)
	{
		std::cout << a->get_name() << " :\n";

		{
			Bird* tmp_bird = dynamic_cast<Bird*>(a);
			if (tmp_bird)
				tmp_bird->fly_up();
		}

		{
			Mammal* tmp_mammal = dynamic_cast<Mammal*>(a);
			if (tmp_mammal)
				tmp_mammal->feed_baby_with_milk();
		}
	}	
}

int Zoo::get_count_bird()
{
	int ans = 0;
	for (auto a : animal)
	{
		Bird* tmp_bird = dynamic_cast<Bird*>(a);
		if (tmp_bird)
			ans++;
	}

	return ans;
}
