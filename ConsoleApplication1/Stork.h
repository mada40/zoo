#pragma once
#include "Bird.h"
class Stork :
    public Bird
{
public:
    void fly_up() override;
    void listen() override;
    Stork(const std::string& _name) : Bird(_name) {};
};

