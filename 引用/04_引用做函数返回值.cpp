#include <iostream>

using namespace std;


// 引用做函数返回值
// 1. 不要返回局部变量的引用 
int& test01()
{
  int a = 10; //局部变量，存放在四区中的栈区
  // 报警告： reference to stack memory associated with local variable 'a' returned [-Wreturn-stack-address]
  return a;
}

// 2. 函数的调用可以作为左值

int& test02()
{
  static int a = 10; // 静态变量， 存放在全局区，全局区中的数据在程序结束后由操作系统释放
  return a;
}

int main()
{
  // 不要返回局部变量的引用，访问不到局部变量的值，且编译器报警告
  // int &ref = test01();
  // cout << "ref = " << ref << endl; // 32760 ref ！=0
  // cout << "ref = " << ref << endl; // 32760
  // cout << "ref = " << ref << endl; // 32760

  int &ref2 = test02();
  cout << "ref2 = " << ref2 << endl;
  cout << "ref2 = " << ref2 << endl;

  // 函数返回值可以作为左值
  // 如果一个函数的返回值是引用，这个函数可以作为左值
  // 相当于 a = 1000
  test02() = 1000;
  cout << "ref2 = " << ref2 << endl;
  cout << "ref2 = " << ref2 << endl;
}