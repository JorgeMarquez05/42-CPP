#pragma once
#include <cmath>
#include <iostream>

class Fixed
{
  private:
	int value;
	static const int fractional_bits = 8;

  public:
	Fixed();
	Fixed(int n);
	Fixed(float f);
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed &operator=(const Fixed &fixed);
	int getRawBits();
	void setRawBits(int const raw);
	int toInt(void) const;
	float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);