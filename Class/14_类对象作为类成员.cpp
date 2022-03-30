#include <iostream>

using namespace std;

class A
{
  public:
    A()
    {
      cout << "A 构造" << endl;
    };
    ~A()
    {
      cout << "A 析构" << endl;
    };
};

class B
{
  public:
    B()
    {
      cout << "B 构造" << endl;
    };
    ~B()
    {
      cout << "B 析构" << endl;
    };
    A a;
};


void test()
{
  B b;
}

int main()
{
  test();
  return 0;
}