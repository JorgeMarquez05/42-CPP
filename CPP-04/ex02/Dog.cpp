#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
  brain = new Brain();
  brain->set_all_ideas("about going for a walk");
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string type): AAnimal(type){
  brain = new Brain();
  brain->set_all_ideas("about going for a walk");
  std::cout << "Dog constructor called" << std::endl;
}


Dog::Dog(const Dog &other) : AAnimal(other) {
  brain = new Brain(*other.getBrain());
  std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
  delete brain;

  if (this != &other) {
    AAnimal::operator=(other);
    brain = new Brain(*other.getBrain());
  }
  std::cout << "Dog copy assignment operator called" << std::endl;
  return (*this);
}

Dog::~Dog() {
  delete brain;

  std::cout << "Dog destructot called" << std::endl;
}

void Dog::makeSound() const { std::cout << "Woof Woof" << std::endl; }

std::string Dog::getIdea(int idx) const {
   return (this->brain->get_idea(idx)); 
  }

  Brain *Dog::getBrain() const
{
  return(this->brain);
}