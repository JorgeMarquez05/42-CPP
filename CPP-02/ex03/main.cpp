#include "Point.hpp"

int main(void) {
  Point a(Fixed(10.5f), Fixed(10.5f));
  Point b(Fixed(20.5f), Fixed(10.5f));
  Point c(Fixed(15.5f), Fixed(19.16f));
  Point point(Fixed(17.5f), Fixed(15.16f));
  // std::cout << point.getX() << " " << point.getY() << std::endl;
  if (bsp(a, b, c, point) == true)
    std::cout << "The point its inside of the triangle abc" << std::endl;
  else
    std::cout << "The point its outside of the triangle abc" << std::endl;
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