
#pragma once
#include <iostream>

class Weapon
{
  private:
	std::string type;

  public:
	Weapon();
	Weapon(std::string type);
	// Weapon(Weapon &weapon);
	std::string getType();
	void setWeapon(Weapon new_type);
	void setType(std::string new_type);
	~Weapon();
};