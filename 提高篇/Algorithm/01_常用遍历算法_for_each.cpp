/**
 * 常用遍历算法 - for_each
*/
#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void printFunc(int v)
{
  cout << v << " ";
}

// 仿函数 输出元素
class MyPrint
{
  public:
    void operator()(int v)
    {
      cout << v << " ";
    }
};

void test()
{
  vector<int> v;
  for (int i = 0; i < 10;i++)
  {
    v.push_back(i + 1);
  }

  // 利用 for_each 遍历
  // 使用普通函数方式
  for_each(v.begin(), v.end(), printFunc);
  // 使用仿函数方式
  for_each(v.begin(), v.end(), MyPrint());
  cout << endl;
  cout
      << endl;
}

int main()
{
  test();
  return 0;
}
 