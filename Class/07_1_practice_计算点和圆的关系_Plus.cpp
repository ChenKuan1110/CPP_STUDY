/**
 * 设计一个圆形类（Circle）和一个点类(Point) 计算点和圆的关系
 */
#include <iostream>

using namespace std;


class Point 
{
  private:
    double m_x;
    double m_y;
  
  public:
    void set(double x, double y)
    {
      m_x = x;
      m_y = y;
    }
    double getX()
    {
      return m_x;
    }
    double getY()
    {
      return m_y;
    }
};


class Circle
{
  private:
    double m_radius;
    Point center;

  public:
    void setRadius(double r)
    {
      m_radius = r > 0 ? r: 0;
    }
    void setLocation(double x, double y)
    {
      center.set(x, y);
    }
    Point getCenter()
    {
      return center;
    }
    double getRadius()
    {
      return m_radius;
    }
};



void getRalationship(Point &p, Circle &c)
{
  double distance = p.getY() - c.getCenter().getY() * p.getY() - c.getCenter().getY();
  distance += p.getX() - c.getCenter().getX() * p.getX() - c.getCenter().getX();

  double r2 = c.getRadius() * c.getRadius();
  if (distance > r2)
  {
    cout << "点("<< p.getX() << "," << p.getY() <<")在圆外" << endl;
  }
  else if (distance == r2)
  {
    cout << "点("<< p.getX() << "," << p.getY() <<")在圆上" << endl;
  }
  else
  {
    cout << "点("<< p.getX() << "," << p.getY() <<")在圆内" << endl;
  }
}


int main()
{
  Circle c;
  c.setLocation(3, 4);
  c.setRadius(5);
  Point p;
  p.set(4, 5);
  getRalationship(p, c);
  return 0;
}
