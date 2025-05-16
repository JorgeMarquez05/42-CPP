#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("default") {
  std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type) {
  std::cout << "Animal constructor called" << std::endl;
}
AAnimal::AAnimal(const AAnimal &other) : _type(other._type) {
  std::cout << "Animal copy constructor called" << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal &other) {
  if (this != &other) {
    this->_type = other._type;
  }
  std::cout << "Animal copy assingnement operator called" << std::endl;
  return (*this);
}

AAnimal::~AAnimal() { std::cout << "Animal destructor called" << std::endl; }
std::string AAnimal::getType() const { return (this->_type); }

// void Animal::makeSound() const
// {
// 	std::cout << "Animal default sound" << std::endl;
// }