#pragma once
#include "Animal.h"
class Bird :
    public Animal
{
public:
    virtual void fly_up() = 0;
    Bird(const std::string& _name) : Animal(_name) {};
};

