#include <iostream>
using namespace std;
#include <deque>

// deque 构造

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
  // 默认构造
  deque<int> deq;

  deq.push_back(1);
  deq.push_back(2);
  deq.push_back(3);

  deq.push_front(0);
  deq.push_front(-1);
  deq.push_front(-2);

  printDeque(deq);

  // deque(begin, end) 构造器
  deque<int> d2(deq.begin(), deq.end());
  printDeque(d2);

  // deque(n, elem) 构造
  deque<int> d3(10, 100);
  printDeque(d3);

  // 拷贝构造
  deque<int> d4(d3);
  printDeque(d4);
}

int main()
{
  test();
  return 0;
}
