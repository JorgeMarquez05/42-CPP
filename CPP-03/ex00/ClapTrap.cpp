#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hitPoints(10), energyPoints(10),
	attackDamage(0)
{
}
ClapTrap::ClapTrap(std::string n) : name(n), hitPoints(10), energyPoints(10),
	attackDamage(0)
{
	std::cout << "ClapTrap " << name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " blows" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no health points" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target;
	std::cout << ", causing " << attackDamage << " points of damage !";
	std::cout << std::endl;
	energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " cannot take more damage already dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " takes " << amount;
	std::cout << " points of damage !";
	std::cout << std::endl;
	hitPoints = (hitPoints > amount) ? hitPoints - amount : 0;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no health points" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " is repairing " << amount;
	std::cout << " of hitPoints !";
	std::cout << std::endl;
	hitPoints += amount;
	energyPoints--;
}