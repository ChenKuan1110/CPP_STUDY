#include <iostream>

using namespace std;

void swap(int num1, int num2)
{
  cout << "交换前：" << endl;
  cout << "num1= " << num1 << endl;
  cout << "num2= " << num2 << endl;

  int tmp = num1;
  num1 = num2;
  num2 = tmp;

  cout << "交换后：" << endl;
  cout << "num1= " << num1 << endl;
  cout << "num2= " << num2 << endl;
}

int main()
{
  int a = 1;
  int b = 4;

  swap(a, b);
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  return 0;
}