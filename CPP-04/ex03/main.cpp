#include "AMateria.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Character.hpp"

// int	main(void)
// {
// 	ICharacter		*me;
// 	AMateria * tmp;
// 	ICharacter		*bob;
// 	me = new Character("me");
// 	tmp = new Ice();
// 	me->equip(tmp);
// 	tmp = new Cure();
// 	me->equip(tmp);
// 	tmp = new Cure();
// 	me->equip(tmp);
// 	bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	me->unequip(0);
// 	me->use(0, *bob);
// 	delete			bob;
// 	delete			me;
// 	return (0);
// }

int	main(void)
{
	IMateriaSource	*src;
	ICharacter		*me;
	AMateria		*tmp;
	ICharacter		*bob;
	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	me = new Character("me");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = new Cure();
	me->equip(tmp);
	bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->use(0, *bob);
	delete			bob;
	delete			me;
	delete			src;
	return (0);
}


// int	main(void)
// {
// 	// IMateriaSource	*src;
// 	ICharacter		*me;
// 	AMateria		*tmp;
// 	ICharacter		*bob;
    
// 	// src = new MateriaSource();
// 	// src->learnMateria(new Ice());
// 	// src->learnMateria(new Cure());
// 	me = new Character("me");
// 	// tmp = src->createMateria("ice");
// 	// me->equip(tmp);
// 	// tmp = src->createMateria("cure");
// 	tmp = new Ice();
// 	me->equip(tmp);
// 	tmp = new Cure();
// 	me->equip(tmp);
// 	bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	// me->unequip(0);
// 	// me->use(0, *bob);
// 	delete			bob;
// 	delete			me;
// 	delete			tmp;
// 	// delete			src;
// 	return (0);
// }
// 
// 
// int main(){
// 
    // std::cout << "\n///////Subject Tests\\\\\\\\\\\n" << std::endl;
// 
    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // ICharacter* me = new Character("me");
    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->equip(tmp);
    // ICharacter* bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // me->use(0, *bob);
// 
    // me->unequip(0);
    // me->checkInventory();
    // me->unequip(1);
    // delete bob;
    // delete me;
    // delete src;
// 
    // std::cout << "\n///////Extra tests\\\\\\\\\\\n" << std::endl;
// 
    // std::cout << "\n///////Creating Cure\\\\\\\\\\\n" << std::endl;
// 
    // AMateria *cure = new Cure();
    // AMateria *cure_clone = cure->clone();
// 
    // std::cout << "\n///////Creating Ice\\\\\\\\\\\n" << std::endl;
// 
    // AMateria *ice = new Ice();
    // AMateria *ice_clone = ice->clone();
// 
    // std::cout << "\n///////Creating Character\\\\\\\\\\\n" << std::endl;
// 
    // ICharacter *character = new Character();
    // ICharacter *miguel = new Character("Miguel");
// 
    // std::cout << "\n///////Testing Character\\\\\\\\\\\n" << std::endl;
// 
    // character->equip(cure);
    // character->equip(ice);
    // character->equip(ice);
    // character->checkInventory();
// 
    // character->unequip(0);
// 
    // character->checkInventory();
// 
    // std::cout << "\n///////Testing Miguel\\\\\\\\\\\n" << std::endl;
// 
    // miguel->equip(cure_clone);
    // miguel->equip(ice_clone);
// 
    // miguel->checkInventory();
// 
    // miguel->unequip(0);
// 
    // miguel->checkInventory();
    // miguel->equip(ice_clone);
    // miguel->equip(ice_clone);
    // miguel->equip(ice_clone);
    // miguel->equip(ice_clone);
    // miguel->equip(ice_clone);
// 
    // miguel->checkInventory();
    // miguel->unequip(0);
    // miguel->unequip(0);
// 
    // miguel->checkInventory();
    // miguel->use(0, *character);
    // miguel->use(1, *character);
// 
    // miguel->equip(ice_clone);
    // miguel->checkInventory();
// 
    // miguel->equip(ice_clone);
    // miguel->checkInventory();
// 
    // std::cout << "\n///////DESTUCTION\\\\\\\\\\\n" << std::endl;
// 
    // delete miguel;
    // delete character;
    // delete ice;
    // delete cure;
// }