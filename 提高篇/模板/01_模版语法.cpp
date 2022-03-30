#include <iostream>

using namespace std;

void swapInt(int &a, int &b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

void swapDouble(double &a, double &b)
{
  double tmp = a;
  a = b;
  b = tmp;
}

void test01()
{
  int a = 10;
  int b = 20;
  double c = 1.2;
  double d = 1.4;

  swapInt(a, b);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  swapDouble(c, d);
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
}


// 模版语法
template <typename T> //声明一个模版 告诉编译器 T 是 一个通用数据类型，不要报错
void mySwap(T &a, T &b)
{
  T tmp = a;
  a = b;
  b = tmp;
}


void test02()
{
  int a = 10;
  int b = 20;
  double c = 1.2;
  double d = 1.4;

  // 两种方式使用函数模版
  // 1. 自动类型推导
  mySwap(a, b);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  // 2. 显示指定类型
  mySwap<double>(c, d);
  cout << "c = " << c << endl;
  cout << "d = " << d << endl;
}

int main()
{
  cout << "普通实现" << endl;
  test01();
  cout << "利用模版实现" << endl;
  test02();
  return 0;
}