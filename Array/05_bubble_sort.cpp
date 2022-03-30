#include <iostream>

using namespace std;

int main()
{
  int arr[] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };
  int tmp = 0;

  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "排序前：";
  for (int i = 0; i < n;i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  // 进行排序算法

  // 轮数
  for (int i = 0; i < n - 1; i++)
  {
    // 每轮执行的对比次数
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }

  // 排序后输出
  cout << "排序后：";
  for (int i = 0; i < n;i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}