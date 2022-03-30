#include "point.h"

void Point::set(double x, double y)
{
  m_x = x;
  m_y = y;
}

double Point::getX()
{
  return m_x;
}

double Point::getY()
{
  return m_y;
}