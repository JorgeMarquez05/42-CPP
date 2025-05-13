#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	
	// const Animal		meta;
	std::cout << std::endl << std::endl << std::endl << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	// meta->makeSound();
	std::cout << std::endl << std::endl << std::endl << std::endl;
	std::cout << std::endl << std::endl << std::endl << std::endl;
	// delete				meta;
	delete			i;
	delete			j;
	return (0);
}

// int	main(void)
// {
// 		Dog  *meta = new Dog();
// 		Dog	*beta = new Dog();
// 		*beta = *meta;
// 		std::cout << &meta << " and " << &beta << std::endl;
// 	std::cout << meta->getBrain()->get_idea(0 )<< std::endl;
// 		delete meta;
// 		delete beta;
// 		return(0);
// }

// int main()
// {
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// delete i;

// return (0);
// }

// int	main(void)
// {

// Brain *brain = new Brain();
// std::cout << brain->get_idea(0)<< std::endl;
// brain->set_all_ideas("Something new");
// std::cout << brain->get_idea(0)<< std::endl;
// std::cout << brain->get_idea(1)<< std::endl;
// std::cout << brain->get_idea(50)<< std::endl;
// delete	brain;
// }
