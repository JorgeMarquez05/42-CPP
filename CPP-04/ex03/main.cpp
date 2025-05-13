#include "AMateria.hpp"
#include "Ice.hpp"
// #include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#include "Cure.hpp"
#include "Character.hpp"

// int	main(void)
// {
// 	ICharacter		*me;
// 	AMateria		*tmp;
// 	ICharacter		*bob;
    
//     bob = new Character("bob");

// 	delete			bob;
// 	// delete			me;
// 	return (0);
// }

int	main(void)
{
	IMateriaSource	*src;
	AMateria		*tmp;
	Ice *big = new Ice();
	Cure *little = new Cure();
	
	// src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// tmp = src->createMateria("ice");
	// tmp = src->createMateria("cure");
	delete			src;
	return (0);
}

// int	main(void)
// {
// 	IMateriaSource	*src;
// 	ICharacter		*me;
// 	AMateria		*tmp;
// 	ICharacter		*bob;
    
// 	src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	me = new Character("me");
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete			bob;
// 	delete			me;
// 	delete			src;
// 	return (0);
// }
