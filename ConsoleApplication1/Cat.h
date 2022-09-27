#pragma once
#include "Mammal.h"
class Cat :
    public Mammal
{
public:
    void feed_baby_with_milk() override;
    void listen() override;
    Cat(const std::string& _name) : Mammal(_name) {};
};

