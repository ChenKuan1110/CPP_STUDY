#include <iostream>
using namespace std;

// 导入头文件
#include "04_funcs.h"


void swap(int a, int b)
{
  int tmp = a;
  a = b;
  b = tmp;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
}