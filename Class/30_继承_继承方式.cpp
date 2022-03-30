#include <iostream>
using namespace std;

/*
  3种继承方式
  1. public , 父类中的public、protected 成员，在子类种依然为 public 、protected， 父类中private 无法访问
  2. protected， 父类中的除了private 中的成员，在子类中均是 protected 父类中private 无法访问
  3. private, 父类中的除了private 中的成员，在子类中均是 private 父类中private 无法访问
*/

class Base1
{
  public:
    int m_A;
  protected:
    int m_B;
  private:
    int m_C;
};

class Son1: public Base1
{
  public:
    void func()
    {
      m_A = 100;
      m_B = 200;
      // m_C = 300; // 父类中私有权限的成员无法访问
    }
};

void test1()
{
  Son1 son1;
  son1.m_A = 100;
  // son2.m_B (InBase,Inaccessible)
  // son2.m_C (InBase,Inaccessible)
}

class Son2: protected Base1
{
  public:
    void my_func()
    {
      m_A = 100;
      m_B = 200;
      // m_C = 300;
    }
};


void test2()
{
  Son2 son2;
  // son2.m_A = 200; // 使用 protected 继承方式的子类，在类外都访问不到，
  // son2.m_B = 200 // protect 属性在类外访问不到
}


class Son3:private Base1
{
  public:
    void func()
    {
      m_A = 100;
      m_B = 200;
      // m_C = 300;
    }
};

class GrandSon:public Son3
{
  public:
    void myFunc()
    {
      // m_A = 100; 父类中使用了 private 继承，属性变为了私有，所以访问不到
    }
};