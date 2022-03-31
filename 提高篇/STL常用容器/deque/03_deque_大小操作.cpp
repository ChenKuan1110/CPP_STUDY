#include <iostream>
using namespace std;
#include <deque>

// deque 大小操作

void printDeque(const deque<int> &d)
{
  for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test()
{
  deque<int> d1;
  for (int i = 0; i < 100;i++)
  {
    d1.push_back(i + 1);
  }
  // empty() 判断是否为空
  if(d1.empty())
  {
    cout << "d1为空" << endl;
  }
  else
  {
    cout << "d1不为空" << endl;
  }

  // size() 获取大小
  cout << "d1.size() :" << d1.size() << endl;

  // 重新分配大小
  d1.resize(10);
  printDeque(d1);

  // 重新分配大小指定填充
  d1.resize(20, 1010);
  printDeque(d1);
}

int main()
{
  test();
  return 0;
}
