#include <iostream>

using namespace std;


int * func()
{
  // 在堆区创建整形数据
  // new 返回该类型的指针
  int *p = new int(10);
  return p;
}

// 1. new 的基本语法
void test1()
{
  int *p = func();
  cout << *p << endl;
  cout << *p << endl;
  cout << *p << endl;

  // 堆区的数据由程序员管理开辟和释放
  // 释放使用 delete 操作符
  delete p;

  cout << *p << endl;
}

// 2. 在堆区开辟数组
void test2()
{
  // 例如创建10个整形数组 
  int *arr = new int[10]; // 创建一个整形数组，包含10个元素 // 返回首地址

  for (int i = 0; i < 10;i++)
  {
    arr[i] = i + 100;
  }

  for (int i = 0; i < 10;i++)
  {
    cout << "arr[" << i << "]=" << arr[i] << endl;
  }

  // 释放堆区数组
  // 释放数组的时候要加上[]
  delete[] arr;
}

int main()
{
  // test1();
  test2();

  return 0;
}