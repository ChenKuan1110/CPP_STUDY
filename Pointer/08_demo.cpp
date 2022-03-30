#include <iostream>

using namespace std;

void bubbleSort(int * p, int size) // int * p 也可以写成 int p[]
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if(p[j] > p[j+1])
      {
        int tmp = p[j];
        p[j] = p[j + 1];
        p[j + 1] = tmp;
      }
    }
  }
}

int main()
{
  int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout << "排序前：" << endl;
  for (int i = 0; i < size;i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  bubbleSort(arr, size);

  cout << "排序后：" << endl;
  for (int i = 0; i < size;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}