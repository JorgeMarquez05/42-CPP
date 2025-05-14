#include "AMateria.hpp"


AMateria::AMateria(std::string const & type): _type(type)
{
    std::cout << "AMateria Constructor called" << std::endl;
}
std::string const & AMateria::getType() const
{
    return(_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria default use " << target.getName() << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called" << std::endl;
}