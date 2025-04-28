#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(int value) : value(value) {}


Fixed::Fixed(const Fixed &fixed) : value(fixed.value)
{
	std::cout << "Fixed Copy Constructor Called" << std::endl;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		value = other.value;
	}
	std::cout << "Copy Assignment Operator Called!" << std::endl;
	return (*this);
}

int Fixed::getRawBits()
{
	std::cout << this->value << std::endl;
    return(0);
}

void Fixed::setRawBits(int const raw)
{
}