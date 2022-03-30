# include <iostream>

using namespace std;

class Point
{
  public:
    int x;
    int y;
    /*void init()
    {
      x = 0;
      y = 0;
    }
    */
    // 构造函数
    Point()
    {
      x = 0;
      y = 0;
    }
    // 带参数的构造函数 
    // 函数重载
    Point(int a, int b)
    {
      x = a;
      y = b;
    }

    // 析构函数 : 内存回收
    ~Point()
    {

    }

    // 成员方法
    void output()
    {
      cout << "x=" << x << " y=" << y << endl;
    }

    void output(int a, int b)
    {
      x = a;
      y = b;
    }
};

int
main()
{
  // Point p; // 调用不带参数的构造函数实例话
  Point p(3, 3);
  p.output(5,5);
  // p.init();
  // p.x = 5;
  // p.y = 6;
  p.output();
  return 0;
}
