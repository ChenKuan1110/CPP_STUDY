#include <iostream>
using namespace std;

// 函数调用运算符重载
class MyPrint
{
  public:
    void operator()(string str)
    {
      cout << "我是打印类[字符串]: " << str << endl;
    }
    void operator()(int num)
    {
      cout << "我是打印类[int]: " << num << endl;
    }
};

// 加法类
class MyAdd
{
  public:
    int operator() (int a, int b)
    {
      return a + b;
    }
};

void print(string str)
{
  cout << str << endl;
}

void test()
{
  MyPrint myPrint;
  myPrint("abc"); // 由于使用起来非常像函数，所以称为仿函数
  myPrint(123);


  print("hello, world");
}

void test1()
{
  MyAdd myadd;
  int ret = myadd(100, 100);
  cout << "ret = " << ret << endl;

  // 匿名对象对象
  cout << MyAdd()(100, 100) << endl;
}

int main()
{
  test();
  cout << "--------------" << endl;
  test1();
  return 0;
}