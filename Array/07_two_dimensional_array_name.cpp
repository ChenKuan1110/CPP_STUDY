#include <iostream>

using namespace std;

int main()
{
  // 二维数组数据名 用处
  // 1. 获取二维数组占用空间大小

  int arr[4][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9},
                   {10, 11, 12}
                  };

  cout << "二维数组在内存中占用的空间大小：" << sizeof(arr) << endl;
  cout << "二维数组一行的大小：" << sizeof(arr[0]) << endl;
  cout << "二维数组一个元素占用大小： " << sizeof(arr[0][0]) << endl;

  cout << "二维数组的行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
  cout << "二维数组的列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;


  // 2. 查看二维数组的首地址
  cout << "二维数组首地址：" << arr << endl;
  cout << "二维数组第一行首地址：" << arr[0] << endl;
  cout << "二维数组第一个元素首地址" << &arr[0][0] << endl;
  return 0;
}