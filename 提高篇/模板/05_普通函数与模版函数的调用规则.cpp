# include <iostream>
using namespace std;

// 当普通函数和模板函数同名时的调用规则
void myPrint(int a, int b)
{
  cout << "普通函数调用" << endl;
}

template <typename T>
void myPrint(T a, T b)
{
  cout << "函数模版调用" << endl;
}


// 函数模版发生重载
template <typename T>
void myPrint(T a)
{
  cout << "函数模版调用， 重载函数之一" << endl;
}

// 1. 如果普通函数和模版函数都可以调用，优先调用普通函数
void test01()
{
  int a = 10, b = 20;
  myPrint(a, b);
}


// 可以使用空列表参数来使用函数模版
void test02()
{
  int a = 10, b = 20;
  myPrint<>(a, b);
}

// 函数模版也可以发生重载
void test03()
{
  int a = 10;
  myPrint(a);
}

// 如果函数模版可以产生更好的匹配，优先调用函数模版
void test04()
{
  double a = 1.1, b=3.14;
  myPrint(a, b);
}

int main()
{
  test01();
  test02();
  test03();
  test04();
  return 0;
}