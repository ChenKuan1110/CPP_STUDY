#include <iostream>
using namespace std;

template <typename T>
void mySwap(T &a, T &b)
{
  T tmp = a;
  a = b;
  b = tmp;
}

template <typename T>
void mySort(T arr[], int len) // 选择排序，降序
{
  for (int i = 0; i < len; i++)
  {
    int max = i; // 最大值下标
    for (int j = i + 1; j < len; j++)
    {
      if (arr[max] < arr[j])
      {
        max = j;
      }
    }
    if (max != i)
    {
      mySwap(arr[max], arr[i]);
    }
  }
}

// 打印数组模版
template <typename T>
void myPrint(T arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void test01()
{
  int arr[10] = {1, 3, 2, 6, 5, 8, 9, 7, 10, 4};
  mySort(arr, 10);
  myPrint(arr, 10);
}

void test02()
{
  char arr[] = "cdagfehkmvxyuv";
  int len = sizeof(arr) / sizeof(arr[0]);
  mySort(arr, len);
  myPrint(arr, len);
}

int main()
{
  test01();
  test02();
  return 0;
}