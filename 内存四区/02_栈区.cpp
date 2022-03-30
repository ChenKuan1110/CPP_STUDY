#include <iostream>

using namespace std;

// 栈区数据的注意事项
// 不要在函数中返回局部变量的地址
// 栈区的数据由编译器管理和释放

// 形参也存放在栈区

int * func()
{
  int a = 10; // 局部变量， 存放在栈区，栈区的数据在函数执行完成后自动释放
  // 报错 address of stack memory associated with local variable 'a' returned [-Wreturn-stack-address]
  return &a; // 返回局部变量的地址
}

int main()
{

  int * p = func();
  cout << *p << endl; // 10 // 第一次能正确打印 是因为编译器做了保留
  cout << *p << endl; // 32760 // 第二次没有保留
  return 0;
}