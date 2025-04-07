#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type) : _weapon(type) {
    this->_name = name;
}


HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}