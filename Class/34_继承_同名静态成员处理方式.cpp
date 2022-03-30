#include <iostream>
using namespace std;

class Base
{
public:
  static int m_A;
  static void func()
  {
    cout << "Base class static func()" << endl;
  }
  static void func(int a)
  {
    cout << "Base class static func(int a)" << endl;
  }
};

// 静态成员 类内声明 类外初始化
int Base::m_A = 100;

class Son : public Base
{
public:
  static int m_A;
  static void func()
  {
    cout << "Son class static func()" << endl;
  }
};
int Son::m_A = 200;

// 静态同名成员处理
void test()
{
  // 静态成员访问方式1: 通过对象访问
  Son son;
  cout << "1. 通过实例访问" << endl;
  cout << "Son static m_A : " << son.m_A << endl;
  cout << "Base static m_A : " << son.Base::m_A << endl; // 访问父类中的静态同名属性，需要加作用域
  cout << "2.通过类名访问" << endl;
  // 2. 通过类名来访问
  cout << "Son static m_A: " << Son::m_A << endl;
  cout << "Base static m_A: " << Base::m_A << endl;
  // 第一个 :: 表示通过类名来访问 第二个 :: 表示 Base（父类） 作用域
  cout << "Base static m_A(通过子类访问): " << Son::Base::m_A << endl;
}

// 静态成员函数处理
void test2()
{
  // 通过对象访问
  cout << "1. 通过实例访问" << endl;
  Son son;
  son.func();
  son.Base::func();
  son.Base::func(100);

// 2. 通过类名访问
  cout << "2.通过类名访问" << endl;
  Son::func();
  Son::Base::func();
  // 子类出现和父类同名的静态函数，也会隐藏父类中所有的同名函数，如果需要访问需要加作用域
  Son::Base::func(100);
}

int main()
{
  test();
  cout << "-------" << endl;
  test2();
  return 0;
}
