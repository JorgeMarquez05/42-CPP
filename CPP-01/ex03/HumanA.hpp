
#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA : public Weapon
{
private:
    std::string _name;
    Weapon&      _weapon;
public:
    HumanA(std::string name, Weapon& type);
    void attack(); 
    ~HumanA();
};

