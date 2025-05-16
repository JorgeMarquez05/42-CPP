#include "Fixed.hpp"

Fixed::Fixed() { std::cout << "Default Constructor Called" << std::endl; }

Fixed::Fixed(int n) {
  std::cout << "Int constructor called" << std::endl;
  this->value = n << fractional_bits;
}
Fixed::Fixed(float f) {
  std::cout << "Float constructor called" << std::endl;
  this->value = roundf(f * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value) {
  std::cout << "Copy Constructor Called" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor Called" << std::endl; }

Fixed &Fixed::operator=(const Fixed &other) {
  if (this != &other) {
    value = other.value;
  }
  std::cout << "Copy Assignment Operator Called!" << std::endl;
  return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
  os << fixed.toFloat();
  return (os);
}

int Fixed::getRawBits() {
  std::cout << "getRawBits member function called" << std::endl;
  return (this->value);
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  this->value = raw;
}
int Fixed::toInt(void) const { return (this->value >> fractional_bits); }

float Fixed::toFloat(void) const {
  return ((float)this->value / (1 << fractional_bits));
}