#include <iostream>
using namespace std;
#include <list>

// list 插入与删除


void printList(const list<int> &lst)
{
  for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test()
{
  list<int> lst;
  lst.push_back(10);
  lst.push_back(11);
  lst.push_back(12);
  lst.push_front(1);
  lst.push_front(2);

  printList(lst); // 2 1 10 11 12

  // 尾删
  lst.pop_back();
  printList(lst); // 2 1 10 11

  // 头删
  lst.pop_front();
  printList(lst); // 1 10 11


  // 指定位置插入 
  list<int>::iterator it = lst.begin();
  lst.insert(++it, 100); // 1 100 10 11

  // 删除
  it = lst.begin();
  lst.erase(++it); // 1 10 11

  lst.push_back(10);
  printList(lst);

  // remove 移除 移除匹配的所有值
  lst.remove(10);
  printList(lst);
}

int main()
{
  test();
  return 0;
}
