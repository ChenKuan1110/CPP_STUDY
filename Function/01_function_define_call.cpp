#include <iostream>

using namespace std;

// 函数定义
int add(int num1, int num2)
{
  int sum = num1 + num2;
  return sum;
}

int main()
{
  int a = 3;
  int b = 4;
  int add(int, int);
  int c = add(a, b);
  // 函数调用
  cout << a << "+" << b  << " = "<< c << endl;
  return 0;
}
