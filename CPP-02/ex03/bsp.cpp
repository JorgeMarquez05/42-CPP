#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  const float x1 = a.getX().toFloat(), y1 = a.getY().toFloat();
  const float x2 = b.getX().toFloat(), y2 = b.getY().toFloat();
  const float x3 = c.getX().toFloat(), y3 = c.getY().toFloat();
  const float x = point.getX().toFloat(), y = point.getY().toFloat();
  float denom;

  denom = (y2 - y3) * (x1 - x3) + (x3 - x2) * (y1 - y3);
  if (denom == 0.0)
    return (false);
  float u, v, w;
  u = ((y2 - y3) * (x - x3) + (x3 - x2) * (y - y3)) / denom;
  v = ((y3 - y1) * (x - x3) + (x1 - x3) * (y - y3)) / denom;
  w = 1.0 - u - v;
  if (u > 0.0 && v > 0.0 && w > 0.0)
    return (true);
  return (false);
}
