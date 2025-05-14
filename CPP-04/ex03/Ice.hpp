#pragma once
#include "AMateria.hpp"


class Ice: public AMateria
{
private:
    
public:
    Ice();
    ~Ice();
    void use(ICharacter& target);
    AMateria* clone() const;

};
