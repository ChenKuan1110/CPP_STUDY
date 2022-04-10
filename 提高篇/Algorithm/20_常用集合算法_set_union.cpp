/**
 * 常用集合算法 - 并
 * set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
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

  // 求并集
  ret.resize(v1.size() + v2.size()); // 大小最大为待求连个容器和元素之和
  vector<int>::iterator endPos = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), ret.begin());

  cout << "v1:";
  for_each(v1.begin(), v1.end(), printFn);
  cout << endl;

  cout << "v2:";
  for_each(v2.begin(), v2.end(), printFn);
  cout << endl;

  cout << "并集：";
  for_each(ret.begin(), endPos, printFn);
  cout << endl;
}

int main()
{
  test();
  return 0;
}
