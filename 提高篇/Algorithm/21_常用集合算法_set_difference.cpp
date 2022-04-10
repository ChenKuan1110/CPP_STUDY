/**
 * 常用集合算法 - 差集
 * set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
 * 注意： 两个容器必须为有序序列
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
  vector<int> ret2;

  // for (int i = 0; i <= 10;i++)
  // {
  //   v1.push_back(i);
  //   v2.push_back(i + 5);
  // }


  // NOTE: 求并集 容器必须为有序
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(4);
  v1.push_back(5);

  v2.push_back(4);
  v2.push_back(6);
  v2.push_back(8);
  v2.push_back(1);

  // 排序
  sort(v1.begin(), v1.end());
  sort(v2.begin(), v2.end()); 

  // 求差集 v1 和  v2的差集
  ret.resize(max(v1.size(), v2.size())); // 大小最大为 两个容器中最大容器的大小
  vector<int>::iterator endPos = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), ret.begin());

  // v2和 v1的差集
  ret2.resize(max(v1.size(), v2.size())); // 大小最大为 两个容器中最大容器的大小
  vector<int>::iterator endPos2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), ret2.begin());

  cout << "v1:";
  for_each(v1.begin(), v1.end(), printFn);
  cout << endl;

  cout << "v2:";
  for_each(v2.begin(), v2.end(), printFn);
  cout << endl;

  cout << "v1与v2差集：";
  for_each(ret.begin(), endPos, printFn);
  cout << endl;

  cout << "v2与v1差集：";
  for_each(ret2.begin(), endPos2, printFn);
  cout << endl;
}

int main()
{
  test();
  return 0;
}
