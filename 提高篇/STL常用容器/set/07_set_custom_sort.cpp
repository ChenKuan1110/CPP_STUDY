/**
 * 改变 set 默认排序规则
*/

#include <iostream>
using namespace std;
#include <set>

void printSet(set<int> &s)
{
  for (set<int>::iterator it = s.begin(); it != s.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

// 仿函数
class MyCompare
{
  public:
    MyCompare(){}
    ~MyCompare(){}
    bool operator()(int v1, int v2) const
    {
      return v1 > v2;
    }
};

void test()
{
  set<int> s;
  s.insert(10);
  s.insert(20);
  s.insert(0);
  s.insert(50);

  printSet(s);

  // 改变 set容器的排序规则需要在添加数据之前
  set<int, MyCompare> s2;

  s2.insert(10);
  s2.insert(20);
  s2.insert(0);
  s2.insert(50);

  for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end();it++)
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
