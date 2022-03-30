#include <iostream>

using namespace std;

int main()
{
  // 指针和数组
  // 利用指针访问数据中的元素
  int arr[10] = {1, 2, 3, 4, 7, 8, 9, 6, 5, 10};
  int *p = arr;

  cout << "数组第一个元素" << arr[0] << endl;
  cout << "利用指针访问第一个元素：" << *p << endl;
  p++;
  cout << "利用指针访问第二个元素：" << *p << endl;

  // 重新指向数组，利用循环打印数组中的值
  p = arr;
  int i = 0;
  while (i < 10)
  {
    cout << *p << endl;
    p++;
    i++;
  }
  return 0;
}