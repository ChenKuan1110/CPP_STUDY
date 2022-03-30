#include <iostream>
using namespace std;
#include <deque>


// deque 插入和删除

void printDeque(const deque<int> &d);
void test()
{
  deque<int> d;


  // 头部插入
  d.push_front(1);
  d.push_front(0);
  printDeque(d);
  // 尾部插入
  d.push_back(2);
  d.push_back(3);
  printDeque(d);

  // 头删
  d.pop_front();
  printDeque(d);

  // 尾删
  d.pop_back();
  printDeque(d);

  // 指定位置插入
  deque<int>::iterator it = d.begin();
  d.insert(it++, 100);
  printDeque(d);
  d.insert(++it, 100);
  printDeque(d);
  d.insert(++it, 3, 300);
  printDeque(d);

  // 区间插入
  deque<int> d1;
  d1.push_back(111);
  d1.push_back(222);
  d1.push_back(333);

  d.insert(d.begin(), d1.begin(), d1.end()); // 在 d 的开始位置插入 整个 d1
  printDeque(d);

  // 指定位置删除
  deque<int>::iterator it1 = d.begin();
  deque<int>::iterator it2 = d.end();
  d.erase(it1); // 删除指定位置，此处相当于头删
  printDeque(d);
  d.erase(++it1, --it2); // 删除从 [begin, end)
  printDeque(d);

  // 清除所有
  d.clear();
  printDeque(d);
}

// 工具函数： 打印 deque元素
void printDeque(const deque<int> &d)
{
  for (deque<int>::const_iterator it = d.begin(); it < d.end(); it ++)
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
