#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Character : public ICharacter
{
private:
    std::string _name; 
    // AMateria inventory[4];
public:
    Character();
    Character(std::string n);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    ~Character();
};

Character::Character() : _name("Default")
{
    std::cout << "Character default constructor called" << std::endl;
}
Character::Character(std::string n) : _name(n)
{
    std::cout << "Character constructor called" << std::endl;

}
std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    std::cout << " Doing";
}
void Character::unequip(int idx)
{
    std::cout << " Doing";

}
void Character::use(int idx, ICharacter& target)
{
    std::cout << " Doing";
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;

}
