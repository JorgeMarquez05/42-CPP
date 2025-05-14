#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    for(int i=0;i<4; i++)
        inventory[i] = NULL;
    std::cout << "MateriaSource: Constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    for(int i= 0; i < 4; i++)
        delete  inventory[i];
    std::cout << "MateriaSource: Destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    while(i < 4 && inventory[i])
        i++;
    inventory[i] = m;
    std::cout << "MateriaSource: New Materia '"<< m->getType() <<  "' Learned" << std::endl;

}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while(i < 4 && inventory[i])
    {
        if(inventory[i]->getType() == type)
        {
            std::cout << "MateriaSource: Create a New Materia '" << type << "' from learned materias" << std::endl;
            return(inventory[i]->clone());
        }
        i++;
    }
    std::cout << "MateriaSource: Non Materia '" << type << "' learned" << std::endl;
    return(NULL);
}
