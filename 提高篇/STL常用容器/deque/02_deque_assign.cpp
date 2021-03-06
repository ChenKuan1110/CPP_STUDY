#include <iostream>
using namespace std;
#include <deque>

// deque 赋值操作

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
  for (int i = 0; i < 10;i++)
  {
    d1.push_back(i + 1);
  }

  // = 赋值
  deque<int> d2 = d1;
  printDeque(d2);

  // assgin(begin, end);
  deque<int> d3;
  d3.assign(d1.begin(), d1.end());
  printDeque(d3);

  // assin(n, elem)
  deque<int> d4;
  d4.assign(10, 1);
  printDeque(d4);
}

int main()
{
  test();
  return 0;
}
