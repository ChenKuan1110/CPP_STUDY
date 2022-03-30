# include <iostream>

using namespace std;

// 交换两个变量的值
// 值传递方式， 不影响实参
void swap1(int a, int b)
{
  int tmp = a;
  a = b;
  b = tmp;
}


// 地址传递方式，可以影响实参
void swap2(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

// 引用传递
void swap3(int &a, int &b)
{
  int tmp = a;
  a = b;
  b = tmp;
}

int main()
{
  int a = 10, b = 20;
  swap1(a, b);
  cout << "a = " << a << ", b = " << b << endl;
  swap2(&a, &b);
  cout << "a = " << a << ", b = " << b << endl;
  swap3(a,b);
  cout << "a = " << a << ", b = " << b << endl;
  return 0;
}