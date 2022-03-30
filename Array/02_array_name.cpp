#include <iostream>

using namespace std;

/*
  数组名用途
 */ 
int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // 1. 获取占用内存情况
  cout << "整个数组占用空间：" << sizeof(arr) << endl;
  cout << "每个元素所占空间：" << sizeof(arr[0]) << endl;
  cout << "数组元素的个数：" << sizeof(arr) / sizeof(arr[0]) << endl;

  // 2. 通过数组名获取数组首地址
  cout << "数组首地址: " << arr << endl;
  cout << "第一个元素的地址： " << &arr[0] << endl;
  cout << "第2个元素的地址： " << &arr[1] << endl;
  return 0;
}