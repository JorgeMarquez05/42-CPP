#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") {
  brain = new Brain();
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

Brain *Dog::getBrain() const { return (this->brain); }
