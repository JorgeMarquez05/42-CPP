#include "Animal.hpp"

Animal::Animal() : _type("default") {
  std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
  std::cout << "Animal constructor called" << std::endl;
}
Animal::Animal(const Animal &other) : _type(other._type) {
  std::cout << "Animal copy constructor called" << std::endl;
}
Animal &Animal::operator=(const Animal &other) {
  if (this != &other) {
    this->_type = other._type;
  }
  std::cout << "Animal copy assingnement operator called" << std::endl;
  return (*this);
}

Animal::~Animal() { std::cout << "Animal destructor called" << std::endl; }
std::string Animal::getType() const { return (this->_type); }

void Animal::makeSound() const {
  std::cout << "Animal default sound" << std::endl;
}

std::string Animal::getIdea(int index) const {
  (void)index;
  return NULL;
}