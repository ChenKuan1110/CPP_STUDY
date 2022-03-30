#ifndef POINT_H
#define POINT_H

class Point
{
  private:
    double m_x;
    double m_y;
  
  public:
    void set(double x, double y);
    double getX();
    double getY();
};

#endif
