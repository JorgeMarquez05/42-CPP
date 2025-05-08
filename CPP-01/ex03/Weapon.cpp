#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "Default";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

std::string Weapon::getType()
{
	return (type);
}

void Weapon::setWeapon(Weapon new_type)
{
	type = new_type.getType();
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}