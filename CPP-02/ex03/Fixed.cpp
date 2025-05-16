#include "Fixed.hpp"

Fixed::Fixed() : value() {
  std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(int n) {
  // std::cout << "Int constructor called" << std::endl;
  this->value = n << fractional_bits;
}
Fixed::Fixed(float f) {
  // std::cout << "Float constructor called" << std::endl;
  this->value = roundf(f * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &fixed) : value(fixed.value) {
  // std::cout << "Copy Constructor Called" << std::endl;
}

Fixed::~Fixed() {
  // std::cout << "Destructor Called" << std::endl;
}

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

Fixed Fixed::operator*(const Fixed &other) const {
  return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator+(const Fixed &other) const {
  return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator++(int) {
  Fixed temp(*this);
  this->value += 1;
  return (temp);
}

Fixed &Fixed::operator++() {
  this->value += 1;
  return (*this);
}

Fixed Fixed::operator/(const Fixed &other) const {
  if (other.toFloat() == 0.0f) {
    std::cerr << "Error: Cannot divide by 0" << std::endl;
    return (Fixed(0));
  }
  return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const {
  return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator--(int) {
  Fixed temp(*this);
  this->value -= 1;
  return (temp);
}

Fixed &Fixed::operator--() {
  this->value -= 1;
  return (*this);
}

bool Fixed::operator<(const Fixed &other) const {
  return (this->value < other.value);
}
bool Fixed::operator>(const Fixed &other) const {
  return (this->value > other.value);
}
bool Fixed::operator<=(const Fixed &other) const {
  return (this->value <= other.value);
}
bool Fixed::operator>=(const Fixed &other) const {
  return (this->value >= other.value);
}
bool Fixed::operator==(const Fixed &other) const {
  return (this->value == other.value);
}
bool Fixed::operator!=(const Fixed &other) const {
  return (this->value != other.value);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
  if (a < b)
    return (a);
  else
    return (b);
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
  if (a < b)
    return (a);
  else
    return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b) {
  if (a > b)
    return (a);
  else
    return (b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
  if (a > b)
    return (a);
  else
    return (b);
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