#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>

// deque 容器排序

void test()
{
  deque<int> d;
  d.push_back(10);
  d.push_back(19);
  d.push_back(5);
  d.push_front(11);
  d.push_front(30);
  d.push_back(2);

  cout << "排序前" << endl;
  for (int i = 0; i < d.size(); i++)
  {
    cout << d.at(i) << " ";
  }
  cout << endl;

  // 默认排序规则时从小到大 升序
  // 对于支持随机访问的迭代器的容器，都可以利用 sort 算法直接对其进行排序
  sort(d.begin(), d.end());

  cout << "排序后" << endl;
  for (int i = 0; i < d.size(); i++)
  {
    cout << d.at(i) << " ";
  }
  cout << endl;
}

int main()
{
  test();
  return 0;
}
