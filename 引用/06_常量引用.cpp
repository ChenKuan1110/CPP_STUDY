#include <iostream>

using namespace std;

// 常量引用的使用场景，通常用来修饰形参
void showValue(const int& a)
{
  // a++; 
  cout << a << endl;
}

int main()
{
  // 引用必须引用一块合法的内存空间
  int a = 10;
  int &ref = a;
  // int &ref = 10; // non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'
  // 加上 const 后，编译器优化为： int tmp = 10; const int &ref2 = tmp;
  const int &ref2 = 10;
  // ref2 = 20; // 加上 const 后，不可以修改

  int b = 100;
  showValue(b);
  return 0;
}