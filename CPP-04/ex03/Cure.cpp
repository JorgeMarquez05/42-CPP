#include "Cure.hpp"


Cure::Cure() : AMateria("cure")
{
    std::cout << "[Cure] Constructor called" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other)
{
    std::cout << "[Cure] Copy Constructor called" << std::endl;
}
Cure &Cure::operator=(const Cure &other)
{
    if(this != &other)
    {
        AMateria::operator=(other);
        std::cout << "[Cure] Copy Assingment operator Called" << std::endl;
    }
    return(*this);
    
}

Cure::~Cure()
{
    std::cout << "[Cure] Destructor called" << std::endl;
}
void Cure::use(ICharacter& target)
{
    std::cout 
    << "Cure: " << "* heals " << target.getName() 
    <<"'s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria * clone = new Cure(); 
    std::cout << "[Cure] Materia cloned" << std::endl;
    return( clone);
}

