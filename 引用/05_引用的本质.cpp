#include <iostream>

using namespace std;


// 发现是引用，转换为 void func(int * const ref)
void func(int& ref)
{
  ref = 100; // ref是引用， 转换为 *ref = 100;
}

int main()
{
  int a = 10;

  int &ref = a; // 自动转换为 int * const ref = &a; 指针常量是指向不能修改，这也侧面印证了为什么引用不能修改
  ref = 20; // 内部发现是 ref 引用， 自动转换为 *ref = 20

  cout << "a =" << a << endl;
  cout << "ref =" << ref << endl;

  func(a);
  return 0;
}