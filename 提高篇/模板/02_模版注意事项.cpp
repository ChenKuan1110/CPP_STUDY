#include <iostream>

using namespace std;


// 模版语法
template <typename T>
void mySwap(T &a, T &b)
{
  T tmp = a;
  a = b;
  b = tmp;
}

void test01()
{
  // 1. 推导的类必须一致才能使用
  int a = 10;
  int b = 20;
  mySwap(a, b); // 参数类型一致，可以使用

  int c = 100;
  double d = 1.23;

  // mySwap(c, d); // 报错， 参数类型不一致
}


// 2. 模版必须要确定出 T 的类型才能调用
template <class T> 
void func()
{
  cout << "func() 被调用" << endl;
}

void test02()
{
  // func(); // no matching function for call to 'func'
  func<int>();
}

int main()
{
  test01();
  test02();
  return 0;
}