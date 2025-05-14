#include "Ice.hpp"

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

AMateria* Ice::clone() const
{
    return(new Ice());
}
