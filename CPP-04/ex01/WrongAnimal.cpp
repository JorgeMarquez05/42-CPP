#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("default") {
  std::cout << "Animal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
  std::cout << "Animal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "Animal destructor called" << std::endl;
}
std::string WrongAnimal::getType() const { return (this->_type); }

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal default sound" << std::endl;
}