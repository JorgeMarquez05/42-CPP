#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
private:

public:
    Cure();
    ~Cure();
    void use(ICharacter& target);
    Cure* clone() const;

};

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Constructor called" << std::endl;
}a

Cure::~Cure()
{
    std::cout << "Cure Destructor called" << std::endl;
}
void Cure::use(ICharacter& target)
{
    std::cout 
    << "Cure: " << "* heals " << target.getName() 
    <<"’s wounds *" << std::endl;
}

Cure* Cure::clone() const
{
    return( new Cure());
}
