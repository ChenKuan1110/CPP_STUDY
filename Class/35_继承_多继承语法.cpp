#include <iostream>
using namespace std;

class Base1
{
  public:
    int m_A;
    Base1()
    {
      cout << "Base1 构造" << endl;
      m_A = 100;
    }
    ~Base1()
    {
      cout << "Base1 析构" << endl;
    }
};

class Base2
{
  public:
    int m_B;
    Base2()
    {
      cout << "Base2 构造" << endl;
      m_B = 200;
    }
    ~Base2()
    {
      cout << "Base2 析构" << endl;
    }
};

class Son: public Base1, public Base2
{
  public:
    int m_C;
    int m_D;
    Son()
    {
      cout << "Son 构造" << endl;
      m_C = 300;
      m_D = 400;
    }
    ~Son()
    {
      cout << "Son 析构" << endl;
    }
};


//构造析构顺序
/*
  Base1 构造
  Base2 构造
  Son 构造
  Son 析构
  Base2 析构
  Base1 析构
 */
void test()
{
  Son son;

  cout << "son.m_A = " << son.m_A << endl;
  cout << "son.m_B = " << son.m_B << endl;
  cout << "son.m_C = " << son.m_C << endl;
  cout << "son.m_D = " << son.m_D << endl;
}

int main()
{
  test();
  return 0;
}