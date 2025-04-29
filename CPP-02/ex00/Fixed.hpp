#pragma once
#include <iostream>

class Fixed
{
  private:
	int value;
	static const int fractional_bits = 8;

  public:
	Fixed();
	Fixed(int value);
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed &operator=(const Fixed &fixed);
	int getRawBits();
	void setRawBits(int const raw);

};
