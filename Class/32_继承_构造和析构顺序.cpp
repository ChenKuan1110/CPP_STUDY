#include <iostream>
using namespace std;

class Base
{
  public:
    Base()
    {
      cout << "父类构造" << endl;
    }
    ~Base()
    {
      cout << "父类析构" << endl;
    }
};

class Son:public Base
{
  public:
    Son()
    {
      cout << "子类构造" << endl;
    }
    ~Son()
    {
      cout << "子类析构" << endl;
    }
};


// 继承的构造和析构顺序
/**
 * 父类构造
    子类构造
    子类析构
    父类析构
 */ 
void test()
{
  Son son;
}

int main()
{
  test();
  return 0;
}
