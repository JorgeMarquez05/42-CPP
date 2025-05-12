#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	delete	brain;

	// Brain *brain = new Brain();
	// std::cout << brain->get_idea(0)<< std::endl;
	// brain->set_all_ideas("Something new");
	// std::cout << brain->get_idea(0)<< std::endl;
	// std::cout << brain->get_idea(1)<< std::endl;
	// std::cout << brain->get_idea(50)<< std::endl;
}

// int	main(void)
// {
// 	const Animal		*meta = new Animal();
// 	const Animal		*j = new Dog();
// 	const Animal		*i = new Cat();
// 	const WrongAnimal	*wrong = new WrongAnimal();
// 	const WrongAnimal	*k = new WrongCat();

// 	std::cout << std::endl << std::endl << std::endl << std::endl;
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); // will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
// 	std::cout << std::endl << std::endl << std::endl << std::endl;
// 	std::cout << k->getType() << " " << std::endl;
// 	k->makeSound(); // will output the animal sound!
// 	wrong->makeSound();
// 	std::cout << std::endl << std::endl << std::endl << std::endl;
// 	delete				meta;
// 	delete				i;
// 	delete				j;
// 	delete				wrong;
// 	delete				k;
// 	return (0);
// }
