#include <iostream>
using namespace std;

// 普通函数与函数模版的却别

// 普通函数
int myAdd1(int a, int b)
{
  return a + b;
}


// 函数模版
template <typename T>
T myAdd2(T a, T b)
{
  return a + b;
}

void test01()
{
  cout << "1 + 2 = " << myAdd1(1, 2) << endl;
  cout << "1 + c = " << myAdd1(1, 'c') << endl; // 普通函数可以发生隐式类型转换
}

void test02()
{
  cout << "1 + 2 = " << myAdd2(1, 2) << endl; // 自动类型推导
  cout << "1 + c = " << myAdd2<int>(1, 'c') << endl; // 显示指定类型
}

int main()
{
  test01();
  test02();
  return 0;
}