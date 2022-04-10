/**
 * 常用算数生成算法 accumalute
 * accumulate(iterator beg, iterator end, value)
*/
#include <iostream>
using namespace std;
#include <vector>
#include <numeric> // 算数算法头文件


void test()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);

  // 计算容器中元素累加和
  int ret = accumulate(v.begin(), v.end(), 0);
  int ret1 = accumulate(v.begin(), v.end(), 100);
  cout << "累加和为：" << ret << endl;
  cout << "初始值 100，累加和为：" << ret1 << endl;
}

int main()
{
  test();
  return 0;
}
