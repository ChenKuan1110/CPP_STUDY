/**
 * 常用集合算法 - 交集
 * set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
 * 注意：元素必须为有序序列
 */

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void printFn(int v)
{
  cout << v << " ";
}

void test()
{
  vector<int> v1;
  vector<int> v2;
  vector<int> ret;


  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(4);
  v1.push_back(5);

  v2.push_back(4);
  v2.push_back(6);
  v2.push_back(8);
  v2.push_back(1);

  // 注意：元素必须为有序序列
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end());

  // 求交集
  ret.resize(min(v1.size(), v2.size())); // 初始化目标容器大小 ： 目标容器最大为 求交集两个容器中的元素最少哪个容器的大小
  // set_intersection() 返回目标迭代器的结束位置
  vector<int>::iterator endPos = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), ret.begin());

  cout << "v1:";
  for_each(v1.begin(), v1.end(), printFn);
  cout << endl;

  cout << "v2:";
  for_each(v2.begin(), v2.end(), printFn);
  cout << endl;

  cout << "交集：";
  for_each(ret.begin(), endPos, printFn);
  cout << endl;
}

int main()
{
  test();
  return 0;
}
