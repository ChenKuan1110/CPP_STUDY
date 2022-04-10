/**
 * 常用查找算法 - 相邻元素查找
 * adjacent_find(iterator beg, iterator end);
*/
#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void test1()
{
  vector<int> v;
  v.push_back(0);
  v.push_back(2);
  v.push_back(0);
  v.push_back(3);
  v.push_back(1);
  v.push_back(4);
  v.push_back(3);
  v.push_back(3);
  v.push_back(3);

  vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
  if(pos != v.end())
  {
    cout << "找到了相邻元素, 值为：" << *pos << endl;
  }
  else
  {
    cout << "没有找到相邻元素" << endl;
  }
}

int main()
{
  test1();
  return 0;
}
