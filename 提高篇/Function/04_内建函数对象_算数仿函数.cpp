/**
 * 内建函数对象 
 * 算数仿函数
 * * plus
 * * minus
 * * multiplies
 * * divides
 * * modulus
 * * negate
*/ 

#include <iostream>
using namespace std;
#include <functional>


// 一元算数仿函数 - negate
void test1()
{
  negate<int> n; // 创建函数对象， 整数取反
  int num = 10;
  cout << "num = " << num << endl;
  cout << "-num = " << n(num) << endl;
}

// 二元内建仿函数
void test2()
{
  plus<int> p;
  int num1 = 10;
  int num2 = 20;
  cout << num1 << " + " << num2 << " = " << p(num1, num2) << endl;
}

int main()
{
  test1();
  test2();
  return 0;
}
