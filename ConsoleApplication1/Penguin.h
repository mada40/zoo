#pragma once
#include "Bird.h"
class Penguin :
    public Bird
{
public :
    void fly_up() override;
    void listen() override;
    Penguin(const std::string& _name) : Bird(_name) {};
};

