#pragma once
#include <iostream>

class ClapTrap
{
  private:
	std::string name;
	unsigned int hitPoints;
	int energyPoints;
	int attackDamage;

  public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);

	~ClapTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
