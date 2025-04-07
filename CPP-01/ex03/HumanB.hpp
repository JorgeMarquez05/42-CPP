#pragma once
#include "Weapon.hpp"
#include <iostream>

class HumanB : public Weapon
{
private:
    std::string name;
public:
    HumanB(std::string name);
    void attack();
    ~HumanB();
};


