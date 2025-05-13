#pragma once
#include "AMateria.hpp"


class Ice: public AMateria
{
private:
    
public:
    Ice();
    ~Ice();
    void use(ICharacter& target);
    Ice* clone() const;

};

Ice::Ice(): AMateria("ice")
{  
    std::cout
    << "Ice Constructor Called" << std::endl;
}

Ice::~Ice()
{
    std::cout
    << "Ice Destructor Called" << std::endl;
}

void Ice::use(ICharacter& target)
{
    std::cout 
    << "Ice: * shoots an ice bolt at " 
    << target.getName() << " *" << std::endl;
}

Ice* Ice::clone() const
{
    return( new Ice());
}
