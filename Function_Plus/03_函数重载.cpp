#include <iostream>

using namespace std;

void func()
{
  cout << "func() 被调用" << endl;
}

// 如果和上面函数除了函数体结构不一样，其他都一样，会报错 重新定义 func
// void func()
// {
//   cout << "func 被调用!!!" << endl;
// }


void func(int a)
{
  cout << "func(int a) 被调用 " << endl;
}

void func(double a)
{
  cout << "func(double a) 被调用 " << endl;
}

void func(int a, double b)
{
  cout << "func(int a, double b) 被调用 " << endl;
}

void func(double a,int b)
{
  cout << "func(double a,int b) 被调用 " << endl;
}

// 注意事项： 函数的返回值不可以作为函数重载的条件
// 无法重载仅按返回类型区分的函数C/C++(311)
// int func(double a,int b)
// {
//   cout << "func(double a,int b) 被调用 " << endl;
// }


int main()
{
  func();
  func(10);
  func(3.14);
  func(10, 2.3);
  func(2.0, 100);

  return 0;
}