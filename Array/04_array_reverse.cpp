#include <iostream>

using namespace std;

/**
 * 数组倒置
 */ 
// int main()
// {
//   int arr[5] = { 1, 2, 3, 5, 4 };
//   int n = sizeof(arr) / sizeof(arr[0]);
//   int arr1[n];
//   for (int i = 0; i < n;i++)
//   {
//     arr1[n - i - 1] = arr[i];
//   }
//   cout << "源数组：" << endl;
//   for (int i = 0; i < n;i++){
//     cout << arr[i] << "\t";
//   }
//   cout << "\n倒置后数组：" << endl;
//   for (int i = 0; i < n;i++){
//     cout << arr1[i] << "\t";
//   }
//   cout << endl;
//   return 0;
// }


/**
 * 优化后解决方案： 使用一个临时变量来交换首尾元素（递增首元素、递减尾元素）
 */
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};

  cout << "源数组：" << endl;
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++){
    cout << arr[i] << "\t";
  }
  int tmp = 0;
  int start = 0, end = sizeof(arr) / sizeof(arr[0]) - 1; // 首尾元素下标
  for (; start < end; start++,end--)
  {
    tmp = arr[start];
    arr[start] = arr[end];
    arr[end] = tmp;
  }
  cout << "\n倒置后数组：" << endl;
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++){
    cout << arr[i] << "\t";
  }
  cout << endl;
  return 0;
}