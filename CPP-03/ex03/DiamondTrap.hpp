#pragma once
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap(std::string name);
    ~DiamondTrap();
};

DiamondTrap::DiamondTrap(std::string n)
{
}

DiamondTrap::~DiamondTrap()
{
}
