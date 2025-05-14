#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    ~Cure();
    void use(ICharacter& target);
    AMateria* clone() const;

};
