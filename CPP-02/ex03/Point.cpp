#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}
Point::Point(const Fixed a, const Fixed b) : x(a), y(b)
{
}
Point::Point(const Point &pointed) : x(pointed.x), y(pointed.y)
{
}

// Point &Point::operator=(const Point &other)
// {
// }

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return (this->y);
}

Point::~Point()
{
}