#include "Fixed.hpp"

class Point
{
  private:
	const Fixed x;
	const Fixed y;

  public:
	Point();
	Point(const Fixed a, const Fixed b);
	Point(const Point &point);
	// Point &operator=(const Point &other);
	Fixed getX(void) const;
	Fixed getY(void) const;
	~Point();
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);