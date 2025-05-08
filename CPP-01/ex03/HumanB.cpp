#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon()
{
	this->name = name;
}

HumanB::~HumanB()
{
}
void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << _weapon->getType() << std::endl;
}