#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#define MAX_ANIMALS 10

int	main(void)
{
	Animal	animals[MAX_ANIMALS];

	for (int idx = 0; idx < MAX_ANIMALS; idx++)
	{
		if (idx < MAX_ANIMALS / 2)
			animals[idx] = Dog();
		else
		{
			std::cout << idx << std::endl;
			animals[idx] = Cat();
		}
	}
}

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
// 		Dog  *meta = new Dog();
// 		Dog	*beta = new Dog();
// 		*beta = *meta;
// 		std::cout << &meta << " and " << &beta << std::endl;
// 	std::cout << meta->getBrain()->get_idea(0 )<< std::endl;
// 		delete meta;
// 		delete beta;
// 		return(0);
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
