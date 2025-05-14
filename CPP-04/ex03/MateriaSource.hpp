#pragma once
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
class MateriaSource: public IMateriaSource  
{
private:
    AMateria *inventory[4];
public:
    MateriaSource();
    ~MateriaSource();
    void learnMateria(AMateria*m);
    AMateria* createMateria(std::string const & type);
};
