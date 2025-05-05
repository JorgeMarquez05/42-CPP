#pragma once
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
};

DiamondTrap::DiamondTrap():ScavTrap(),FragTrap(){}
DiamondTrap::DiamondTrap(std::string n): ScavTrap(n), FragTrap(n),  name(n+"clap_name")
{
}

DiamondTrap::~DiamondTrap()
{
}
