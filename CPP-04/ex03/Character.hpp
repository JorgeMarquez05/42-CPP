#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Character : public ICharacter
{
private:
    std::string _name; 
    AMateria *inventory[4];
    AMateria **floor;
    int slots_used;
    int saved_materias;
public:
    Character();
    Character(std::string n);
    Character(const Character &other);
    Character & operator=(const Character &other);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void expand_floor();
    void use(int idx, ICharacter& target);
    ~Character();
};

