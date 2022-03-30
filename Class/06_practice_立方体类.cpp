#include <iostream>

using namespace std;

/**
 * 
 * 设计立方体类(Cube)
  求出立方体的面积和体积
  分别用全局函数和成员函数判断两个立方体是否相等
 */ 

class Cube
{
  double m_w; // 

public:
  void setWidth(double width)
  {
    if(width <=0)
    {
      cout << "长度怎么能大于0呢？" << endl;
      m_w = 0;
      return;
    }
    m_w = width;
  }
  double getWidth()
  {
    return m_w;
  }
  double getArea()
  {
    return m_w * m_w * 6;
  }
  double getVolume()
  {
    return m_w * m_w * m_w;
  }
  // 判断两个是否相等
  bool isEqual(Cube &cube){
    return m_w == cube.getWidth();
  }
};

// 全局函数，判断两个立方体是否相等
bool isEqualUtil(Cube &c1, Cube &c2)
{
  return c1.getWidth() == c2.getWidth();
}

int main()
{
  Cube c1;
  c1.setWidth(5);
  cout << "c1立方体表面积：" << c1.getArea() << endl;
  cout << "c1立方体体积：" << c1.getVolume() << endl;
  Cube c2;
  c2.setWidth(6);
  Cube c3;
  c3.setWidth(5);
  cout << "c1 和 c2是否相等:" << c1.isEqual(c2) << endl;
  cout << "c1 和 c3是否相等:" << c1.isEqual(c3) << endl;

  // 全局方法判断
  cout << "c1 和 c2是否相等:" << isEqualUtil(c1,c2) << endl;
  cout << "c1 和 c3是否相等:" << isEqualUtil(c1,c3) << endl;

}