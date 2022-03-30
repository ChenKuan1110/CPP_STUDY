/**
 * 设计一个圆形类（Circle）和一个点类(Point) 计算点和圆的关系
 */
#include <iostream>
#include <math.h>

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
    double m_x;
    double m_y;

  public:
    void setRadius(double r)
    {
      m_radius = r > 0 ? r: 0;
    }
    void setLocation(double x, double y)
    {
      m_x = x;
      m_y = y;
    }
    void getRalationship(Point &p)
    {
      double distance = sqrt(pow((p.getX() - m_x),2) + pow((p.getY() - m_y),2));
      if(distance > m_radius){
        cout << "点("<< p.getX() << "," << p.getY() <<")在圆外" << endl;
      }else if(distance == m_radius){
        cout << "点("<< p.getX() << "," << p.getY() <<")在圆上" << endl;
      }else{
        cout << "点("<< p.getX() << "," << p.getY() <<")在圆内" << endl;
      }
    }
};


int main()
{
  Circle c;
  c.setRadius(5);
  c.setLocation(3, 4);
  Point p;
  p.set(7, -3);
  c.getRalationship(p);

  Point p1;
  p1.set(4,5);
  c.getRalationship(p1);
  return 0;
}


// 改进建议
// 1. 将圆的圆心也设置成 Point 类型
// 2. 比较距离 可以不用开平方计算 直接比较 开方前的值 和 半径的平方的关系来判断位置
