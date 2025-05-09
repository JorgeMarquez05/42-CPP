#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(),
	FragTrap(), name("default")
{
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << name << " default created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n + "_clap_name"),
	ScavTrap(), FragTrap(), name(n)
{
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << name << " created" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other),
	ScavTrap(other), FragTrap(other), name(other.name)
{
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << "DiamondTrap " << name << " copied" << std::endl;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "DiamondTrap " << name << " assigned" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " destroyed" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << name << ",
		my ClapTrap name is " << ClapTrap::name << std::endl;
}
