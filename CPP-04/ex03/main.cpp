#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {

  std::cout << "\n///////Subject Tests\\\\\\\\\\\n" << std::endl;

  Character *me = new Character("me");
  Character m2;
  AMateria *tmp = new Ice();
  me->equip(tmp);
  tmp = new Cure();
  me->equip(tmp);
  me->equip(tmp);
  Character *bob = new Character(*me);
  bob->use(0, *me);
  bob->use(1, *me);
  bob->use(0, *me);

  me->unequip(0);
  me->unequip(1);
  std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  m2 = *bob;
  m2.unequip(0);
  delete bob;
  delete me;
}

// int main(){

//     std::cout << "\n///////Subject Tests\\\\\\\\\\\n" << std::endl;

//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     me->use(0, *bob);

//     me->unequip(0);
//     me->unequip(1);
//     delete bob;
//     delete me;
//     delete src;

//     std::cout << "\n///////Extra tests\\\\\\\\\\\n" << std::endl;

//     std::cout << "\n///////Creating Cure\\\\\\\\\\\n" << std::endl;

//     AMateria *cure = new Cure();
//     AMateria *cure_clone = cure->clone();

//     std::cout << "\n///////Creating Ice\\\\\\\\\\\n" << std::endl;

//     AMateria *ice = new Ice();
//     AMateria *ice_clone = ice->clone();

//     std::cout << "\n///////Creating Character\\\\\\\\\\\n" << std::endl;

//     ICharacter *character = new Character();
//     ICharacter *ze = new Character("Miguel");

//     std::cout << "\n///////Testing Character\\\\\\\\\\\n" << std::endl;

//     character->equip(cure);
//     character->equip(ice);
//     character->equip(ice);

//     character->unequip(0);

//     std::cout << "\n///////Testing Miguel\\\\\\\\\\\n" << std::endl;

//     ze->equip(cure_clone);
//     ze->equip(ice_clone);

//     ze->unequip(0);

//     ze->equip(ice_clone);
//     ze->equip(ice_clone);
//     ze->equip(ice_clone);
//     ze->equip(ice_clone);
//     ze->equip(ice_clone);

//     ze->unequip(0);
//     ze->unequip(0);

//     ze->use(0, *character);
//     ze->use(1, *character);

//     ze->equip(ice_clone);

//     ze->equip(ice_clone);

//     std::cout << "\n///////DESTUCTION\\\\\\\\\\\n" << std::endl;

//     delete ze;
//     delete character;

// }
