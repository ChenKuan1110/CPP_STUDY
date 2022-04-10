/**
 * 常用排序算法 - sort
 * sort(iterator beg, iterator end, ?_pred)
*/
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <functional>

void printFunc(int v)
{
  cout << v << " ";
}

void test1()
{
  vector<int> v;
  for (int i = 0; i < 10;i++)
  {
    v.push_back(rand() % 100);
  }

  // 进行排序
  sort(v.begin(), v.end()); // 采用默认排序规则排序

  // 遍历打印
  for_each(v.begin(), v.end(), printFunc);
  cout << endl;

  //采用降序排列
  sort(v.begin(), v.end(), greater<int>());
  for_each(v.begin(), v.end(), printFunc);
  cout << endl;
}

int main()
{
  test1();
  return 0;
}
