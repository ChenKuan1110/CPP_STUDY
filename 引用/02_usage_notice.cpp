#include <iostream>

using namespace std;

int main()
{
  // 引用的注意事项

  int a = 10;
  int b = 20;
  // int &c;  // 报错，引用变量必须要指定初始值
  int &c = a; // 一旦初始化后不能更改
  c = b; // 这是赋值操作，不是更改引用

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;

  return 0;
}