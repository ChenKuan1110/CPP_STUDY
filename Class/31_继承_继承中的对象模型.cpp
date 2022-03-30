#include <iostream>

using namespace std;

class Base
{
  public:
    int m_A;
  protected:
    int m_B;
  private:
    int m_C;
};

class Son:public Base
{
  public:
    int m_D;
};

void test()
{
  // 父类中所有非静态成员属性都会被子类继承
  // 父类中的私有成员属性，是被编译器隐藏了，所以才访问不到，但都被继承了
  cout << "sizeof(Son) = " << sizeof(Son) << endl; // 16
  Son son;
  cout << "sizeof(son) = " << sizeof(son) << endl; // 16
}

int main()
{
  test(); 
  return 0;
}