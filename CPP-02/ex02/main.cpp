#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	f;

	a.setRawBits(1235);
	Fixed const b(Fixed(5.05f) * Fixed(6));
	Fixed const c(Fixed(5.05f) - Fixed(5));
	Fixed const e(Fixed(5.05f) / Fixed(3));
	Fixed const d(Fixed(5.05f) + Fixed(4));
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << f << std::endl;
	std::cout << --f << std::endl;
	std::cout << f << std::endl;
	std::cout << f-- << std::endl;
	std::cout << f << std::endl;
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	Fixed const &minvalue = Fixed::min(a, b);
	// minvalue.setRawBits(1212);
	std::cout << minvalue << std::endl;
	return (0);
}

// int	main(void)
// {
// 	Fixed a;
// 	Fixed const b(Fixed(5.05f) * Fixed(2));
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::min(a, b) << std::endl;
// 	return (0);
// }