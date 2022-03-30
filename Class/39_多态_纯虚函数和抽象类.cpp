#include <iostream>

using namespace std;


// 纯虚函数和抽象类

// 包含纯虚函数的类就称为抽象类
// 抽象类不能被实例话
// 抽象类的派生类必须实现抽象类中的纯虚函数
class Base
{
  public:
    // 纯虚函数
    virtual void func() = 0;
};

class Son : public Base
{
  public:
    // 必须要实现抽象类中的纯虚函数，否则子类也是抽象类
    void func(){
      cout << "子类中纯虚函数实现" << endl;
    }
};

void test()
{
  // Base base; // 抽象类不能够被实例化
  // new Base; // new 也不能实例化抽象类
  // Son son;
  // 多态实例化
  Base *base = new Son;
  base->func();
}

int main()
{
  test();
  return 0;
}