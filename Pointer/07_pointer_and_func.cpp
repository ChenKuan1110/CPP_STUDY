#include <iostream>

using namespace std;

// 示例： 交换两个数

// 值传递
void swap1(int a, int b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

// 地址传递
void swap2(int * p1, int * p2)
{
  int tmp = *p1;
  *p1 = *p2;
  *p2 = tmp;
}

int main()
{
  int a = 10;
  int b = 20;

  swap1(a, b);
  cout << "通过值传递后， a,b 的值为： " << a << " ,"<< b << endl;

  swap2(&a, &b);
  cout << "通过引用传递后， a,b 的值为：" << a << " ," << b << endl;

  return 0;
}