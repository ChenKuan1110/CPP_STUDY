#include <iostream>
using namespace std;

class Base
{
public:
  int m_A;
  Base()
  {
    m_A = 100;
  }
  void func()
  {
    cout << "Base class func()" << endl;
  }
  void func(int a)
  {
    cout << "Base class func(int a)" << endl;
  }
};

class Son : public Base
{
public:
  int m_A;
  Son()
  {
    m_A = 200;
  }
  void func()
  {
    cout << "Son class func()" << endl;
  }
};

// 同名成员处理
void test()
{
  Son son;
  cout << "Son m_A : " << son.m_A << endl;
  cout << "Base m_A : " << son.Base::m_A << endl; // 访问父类中的同名属性，需要加作用域

  son.func();
  son.Base::func();
}

void test2()
{
  Son son;

  son.func();
  // 如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏父类中的所有同名成员函数
  // 如果需要访问到被子类隐藏的父类中的成员函数，需要加作用域
  son.Base::func();
  son.Base::func(100);
}

int main()
{
  test();
  cout << "-------" << endl;
  test2();
  return 0;
}
