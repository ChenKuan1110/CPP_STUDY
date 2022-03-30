#include <iostream>

using namespace std;

// 类模版中成员函数的创建时机
// 类模版成员函数在调用时才去创建


class Person1
{
  public:
    void showPerson1()
    {
      cout << "Person1 showPerson1" << endl;
    }
};

class Person2
{
  public:
    void showPerson2()
    {
      cout << "Person2 showPerson2" << endl;
    }
};


template <class objType>
class MyClass
{
public:
  objType obj;
  // 类模版中的成员函数，并不是一开始就创建的，而是在调用的时候才生成的
  void func1()
  {
    obj.showPerson1();
  }
  void func2()
  {
    obj.showPerson2();
  }
};

void test()
{
  MyClass<Person1> m;
  m.func1();
  // m.func2();
}

int main()
{
  test();
  return 0;
}