#pragma once 
#include <iostream>

class Fixed
{
private:
    int value;
    static const int fractional_bits;
public:
    Fixed(/* args */);
    Fixed(int value);
    Fixed(const Fixed &fixed);
    ~Fixed();
    Fixed & operator = (const Fixed &fixed);
    int getRawBits();
    void setRawBits(int const raw);
};


