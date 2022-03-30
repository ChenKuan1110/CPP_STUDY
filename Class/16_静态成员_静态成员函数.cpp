#include <iostream>

using namespace std;

class Person
{
  public:
    // 普通成员函数 
    void func() {

    }
    // 静态成员函数
    static void func2()
    {
      cout << "static void func2 被调用" << endl;
      // 静态成员只能够访问静态变量
      // m_Name 实例成员不能访问
      m_A = 100; // 可以访问静态变量
    }

    // 静态变量
    static int m_A; // 类内声明
    // 普通实例变量
    string m_Name; 

private:
    // 静态成员函数也有访问权限
    static void func3()
    {
      cout << "private static void" << endl;
    }
};

int Person::m_A = 18; // 类外初始化类静态变量

void test01()
{
  // 调用静态成员函数
  // 方式1: 通过对象访问
  cout << "==========通过对象访问" << endl;

  Person p;
  p.func2();

  // 方式2: 通过类名访问
  cout << "==========通过类名访问" << endl;
  Person::func2();

  cout <<"Person::m_A = " << Person::m_A << endl;

  // 静态成员也有访问权限控制
  // Person::func3 (Inaccessible)
}

int main()
{
  test01();
  return 0;
}