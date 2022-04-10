/**
 * 常用遍历算法 transform
 * transform(iterator beg1, iterator end1, iterator beg2, _func)
*/
#include <iostream>
using namespace std;
#include <vector>
# include <algorithm>

int transFunc(int v)
{
  return v + 100;
}

class MyPrint
{
  public:
    void operator()(int v)
    {
      cout << v << " ";
    }
};

// 传统 for 循环遍历打印 vector 中的元素
void printVector(vector<int> &v)
{
  for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test()
{
  vector<int> v1;
  for (int i = 0; i < 10;i++)
  {
    v1.push_back(i * (rand() % 10));
  }
  printVector(v1);

  vector<int> v2;
  v2.resize(v1.size()); // 注意： 此步骤很关键，如果没有此步骤，不会为v2指定空间，那么搬运会失败
  // 搬运功能
  transform(v1.begin(), v1.end(), v2.begin(), transFunc);
  for_each(v2.begin(), v2.end(), MyPrint());
  cout << endl;
}

int main()
{
  test();
  return 0;
}
