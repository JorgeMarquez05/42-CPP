#pragma once
#include "IMateriaSource.hpp"
class MateriaSource: public IMateriaSource  
{
private:

public:
    MateriaSource();
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

MateriaSource::MateriaSource()
{
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria*){}
AMateria* MateriaSource::createMateria(std::string const & type){}cd ..
