/**
 * 函数对象的基本使用
*/
#include <iostream>
using namespace std;

class MyFunc
{
  public:
    void operator()() {
      cout << "operator() 函数被调用" << endl;
    }
};

class MyAdd
{
  public:
    int operator() (int v1, int v2)
    {
      return v1 + v2;
    }
};


class MyPrint
{
  public:
    MyPrint()
    {
      this->num = 0;
    }
    void operator()(string msg)
    {
      cout << msg << endl;
      this->num++;
    }
    int num; // 自身
};


// 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
void test1()
{
  // 像普通函数一样调用
  MyFunc func;
  func();

  // 可以有参数值，也可以有返回值
  MyAdd add;
  cout << "MyAdd: " << add(10, 20) << endl;

}

// 函数对象超出了普通函数的概念，可以拥有自己的状态
void test2()
{
  MyPrint print;
  print("hello, world");
  print("hello, world");
  print("hello, world");
  print("hello, world");
  print("hello, world");

  cout << "函数对象调用次数： " << print.num << endl;
}

// 函数对象可以作为参数传递
void doPrint(MyPrint &mp, string msg)
{
  mp(msg);
}
void test3()
{
  MyPrint print;
  // 函数对象作为参数传递给另一个函数
  doPrint(print, "hello this is CK");
}

int main()
{
  test1();
  test2();
  test3();
  return 0;
}
