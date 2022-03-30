#include "circle.h"
#include "point.h"

void Circle::setRadius(double r)
{
  m_radius = r > 0 ? r : 0;
}

void Circle::setLocation(double x, double y)
{
  center.set(x, y);
}

Point Circle::getCenter()
{
  return center;
}

double Circle::getRadius()
{
  return m_radius;
}