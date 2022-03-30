#include <iostream>

using namespace std;

// 设计一个 圆类，求圆的周长
// C = 2 * PI * R

const double PI = 3.14;

class Circle
{
  public:
    double radius;
    double getPerimeter(){
      return 2 * PI * radius;
    }
};

int main()
{
  // 通过圆类，创建一个具体的圆（对象）
  // 实例化
  Circle c1;
  // 给对象的属性赋值
  c1.radius = 10;
  // 调用对象的行为（方法）
  cout << "圆的周长：" << c1.getPerimeter() << endl; 
} 