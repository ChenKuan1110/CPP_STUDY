#include <iostream>

using namespace std;

int main()
{
  // 引用的基本使用
  int a = 10;
  // 给变量 a 起一个别名 b
  int &b = a;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  b = 20;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  return 0;
}