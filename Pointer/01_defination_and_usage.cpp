#include <iostream>

using namespace std;

int main()
{
  // 指针的定义和使用

  int a = 100;
  int *p; // 定义指针变量
  p = &a; // 变量 p 中存放 变量 a 的地址

  

  cout << "&a = " << &a << endl;
  cout << "指针变量 p 存放的值： " << p << endl;
  cout << "指针变量 p 的地址： " << &p << endl;
  cout << "指针变量指向地址中的值：" << *p << endl;
  cout << "sizeof(p) :" << sizeof(p) << endl;
  cout << "sizeof(*p) :" << sizeof(*p) << endl;

  // 指针的使用：
  // 可以通过 解引用 的方式找到指针指向的内存 即 "* 指针变量"
  *p = 1000;
  cout << "a = " << a << endl;
  cout << "*p = " << *p << endl;
  return 0;
}