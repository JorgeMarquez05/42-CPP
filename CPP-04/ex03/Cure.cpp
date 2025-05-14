#include "Cure.hpp"


Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure Constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor called" << std::endl;
}
void Cure::use(ICharacter& target)
{
    std::cout 
    << "Cure: " << "* heals " << target.getName() 
    <<"'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
    return( new Cure());
}

