#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat") {
  brain = new Brain();
  std::cout << "Cat constructor called" << std::endl;
}

void Cat::makeSound() const { std::cout << "Miau Miau" << std::endl; }

Cat::Cat(const Cat &other) : AAnimal(other) {
  brain = new Brain(*other.brain);
  std::cout << "Cat copy constructor called" << std::endl;
}
Cat &Cat::operator=(const Cat &other) {
  delete brain;

  if (this != &other) {
    AAnimal::operator=(other);
    brain = new Brain(*other.brain);
  }
  std::cout << "Cat copy assignment operator called" << std::endl;
  return (*this);
}

Cat::~Cat() {
  delete brain;
  std::cout << "Cat destructor called" << std::endl;
}