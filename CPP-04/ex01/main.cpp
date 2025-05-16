#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

  const Animal *dog = new Dog();
  const Animal *cat = new Cat();

  std::cout << std::endl;
  std::cout << cat->getType() << " " << std::endl;
  std::cout << dog->getType() << " " << std::endl;

  cat->makeSound();
  dog->makeSound();

  std::cout << "Dog first thought " << dog->getIdea(0) << std::endl;
  std::cout << "Cat first thought " << cat->getIdea(0) << std::endl;

  delete dog;
  delete cat;

  const Animal *yorkie = new Dog("Yorkie");

  std::cout << "The dog " << yorkie->getType()
            << " have the thought: " << yorkie->getIdea(0) << std::endl;

  yorkie->makeSound();

  delete yorkie;

  Animal *animals[10];

  for (int i = 0; i < 10; i++) {
    if (i < 10 / 2)
      animals[i] = new Dog();
    else
      animals[i] = new Cat();
  }

  std::cout << std::endl;

  for (int i = 0; i < 10; i++)
    delete animals[i];
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
