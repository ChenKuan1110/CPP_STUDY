#include <iostream>
using namespace std;
#include <vector>
#include <algorithm> // 标准算法头文件

// vector 容器存放内置数据类型

void myPrint(int val)
{
  cout << val << endl;
}

void test01()
{
  // 创建一个 vector 数组
  vector<int> v;

  // 插入数据
  v.push_back(10);
  v.push_back(11);
  v.push_back(8);
  v.push_back(20);


  // 通过迭代器访问容器中的数据
  // vector<int>::iterator itBegin = v.begin(); // v.begin() 起始迭代器，指向容器中第一个元素
  // vector<int>::iterator itEnd = v.end(); // v.end() 结束迭代器，指向容器中最后一个元素的下一个位置

  // // 第一种访问方式
  // while(itBegin != itEnd)
  // {
  //   cout << *itBegin << endl;
  //   itBegin++;
  // }

  // 第二种访问方式
  // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  // {
  //   cout << *it << endl;
  // }


  // 第三种： 利用STL中提供的一套遍历算法 for_each
  // 参数说明： 1. 起始迭代器 2. 结束迭代器 3. 函数方法
  for_each(v.begin(), v.end(), myPrint);
}

int main()
{
  test01();
  return 0;
}