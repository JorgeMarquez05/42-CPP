#pragma once
#include <cmath>
#include <iostream>

class Fixed {
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
  Fixed operator*(const Fixed &other) const;
  Fixed operator+(const Fixed &other) const;
  Fixed operator++(int);
  Fixed &operator++();
  Fixed operator/(const Fixed &other) const;
  Fixed operator-(const Fixed &other) const;
  Fixed operator--(int);
  Fixed &operator--();
  bool operator<(const Fixed &other) const;
  bool operator>(const Fixed &other) const;
  bool operator<=(const Fixed &other) const;
  bool operator>=(const Fixed &other) const;
  bool operator==(const Fixed &other) const;
  bool operator!=(const Fixed &other) const;
  static Fixed &min(Fixed &a, Fixed &b);
  static const Fixed &min(const Fixed &a, const Fixed &b);
  static Fixed &max(Fixed &a, Fixed &b);
  static const Fixed &max(const Fixed &a, const Fixed &b);
  int getRawBits();
  void setRawBits(int const raw);
  int toInt(void) const;
  float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);