
#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanA : public Weapon
{
  private:
	std::string _name;
	Weapon &_weapon;

  public:
	HumanA(std::string name, Weapon &type);
	void attack();
	~HumanA();
};
