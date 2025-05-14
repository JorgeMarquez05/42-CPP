#include "Character.hpp"

Character::Character() : _name("Default"), slots_used(0), saved_materias(4)
{
    floor = new AMateria*[saved_materias];
    for(int i = 0; i< 4; i++)
    {
        inventory[i] = NULL;
        floor[i]=NULL;
    }
    std::cout << "Character default constructor called" << std::endl;
}
Character::Character(std::string n) : _name(n), slots_used(0), saved_materias(4)
{
    floor = new AMateria*[saved_materias];
    for(int i = 0; i< 4; i++)
    {
        inventory[i] = NULL;
        floor[i]=NULL;
    }
    std::cout << "Character constructor called" << std::endl;
}
std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    int i =0;
    if(slots_used == 4)
    {
        std::cout << "Inventory of Materias already full" << std::endl;
        return;
    }
    while(i < 4 && inventory[i])
        i++;
    inventory[i] = m;
    std::cout << _name << " equip Materia "<< m->getType() << std::endl;
    slots_used++;
}

void Character::unequip(int idx)
{
    int i =0 ;
    AMateria ** temp_floor;
    if(idx < 0 || idx >= 4 || !inventory[idx] || slots_used == 0)
    {
        std::cout << "Materia in that index doesn't exit" << std::endl;
        return;
    }
    while(floor[i] && i < saved_materias - 1)
        i++;
    // if(i == saved_materias - 1)
    // {
    //     saved_materias += 4;
    //     temp_floor = new AMateria*[saved_materias];
    //     for(int j = 0; j < saved_materias; j++)
    //         temp_floor[j] = floor[j];
        
    //     for(int j = 0; j < saved_materias; j++)
    //         floor[j] = NULL;

    //     delete[] floor;
    //     floor = temp_floor;
    // }
    std::cout << i <<std::endl;
    floor[i] = inventory[idx];
    std::cout << floor[i] << " " << inventory[idx] <<std::endl;
    inventory[idx] = NULL;
    std::cout << floor[i] << " " << inventory[idx] <<std::endl;
    slots_used--;
    slots_used = (slots_used < 0) ? 0 : slots_used;
}
void Character::use(int idx, ICharacter& target)
{
    if(idx < 0 || idx >= 4 || !inventory[idx])
    {
        std::cout << "Materia in that index doesn't exit" << std::endl;
        return;
    }
    inventory[idx]->use(target);
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if(inventory[i] != NULL)
        {
            delete inventory[i];
        }
    }
    // delete[] floor;
    for(int i = 0; i < saved_materias; i++)
    {
        if(floor[i] != NULL)
        {
            delete floor[i];
        }
    }
    delete [] floor;
    std::cout << "Character destructor called" << std::endl;
}