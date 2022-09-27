#pragma once
#include "Mammal.h"
class Dog :
    public Mammal 
{

public:
    void feed_baby_with_milk() override;
    void listen() override;
    Dog(const std::string& _name) : Mammal(_name) {};
};

