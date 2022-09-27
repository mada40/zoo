#pragma once
#include <string>
class Animal
{
private:
	static int count_animals;
	int id;
	std::string name;
public:
	Animal(const std::string&);
	virtual ~Animal();
	std::string get_name();
	int get_id();
	virtual void listen() = 0;
};

