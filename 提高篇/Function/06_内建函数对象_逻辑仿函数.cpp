/**
 * 内建函数对象
 * 逻辑仿函数
*/

#include <iostream>
using namespace std;
#include <vector>
#include <functional>
#include <algorithm>




void test()
{
  vector<bool> v;
  v.push_back(true);
  v.push_back(true);
  v.push_back(false);
  v.push_back(true);
  v.push_back(false);

  for (vector<bool>::const_iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  // 利用逻辑非 将容器中v 中的数据搬运到 容器2 中，执行取反操作
  vector<bool> v2;
  v2.resize(v.size()); // 指定大小

  // 利用 tranform 算法进行搬运
  // 参数说明： 1. 输入起始迭代器 2. 输入结束迭代器 3. 目标的起始迭代器 4. 一元操作符
  transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
  cout << "进行转换后： v2:" << endl;
  for (vector<bool>::const_iterator it = v2.begin(); it != v2.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

int main()
{
  test();
  return 0;
}
