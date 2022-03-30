#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

class Circle
{
  private:
    double m_radius;
    Point center;

  public:
    void setRadius(double r);

    void setLocation(double x, double y);

    Point getCenter();

    double getRadius();
};

#endif
