#include <iostream>

using namespace std;

// 函数默认参数
int func(int a, int b, int c=40)
{
  return a + b + c;
}

/*
  注意事项：
  1. 如果某个参数位置上已经有默认参数，从这个位置往后都必须要有默认参数
  2. 如果函数的声明有默认参数，那么函数的实现就不能有默认参数
*/

int func2(int a, int b=2); // 函数声明

// int func2(int a, int b=20) // 报错： 参数 b 重定义了参数
// {

// }
int func2(int a, int b)
{
  return a + b;
}

int main()
{
  
  int ret = func(10, 20, 30);
  int ret2 = func(10, 20);
  cout << "ret = " << ret << endl;
  cout << "ret2 = " << ret2 << endl;

  cout << func2(10, 11) << endl;
  cout << func2(10) << endl;

  return 0;
}