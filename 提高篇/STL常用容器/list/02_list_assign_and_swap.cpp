#include <iostream>
using namespace std;
#include <list>

// list 赋值与交换

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
  for (int i = 0; i < 10;i++)
  {
    lst.push_back(i + 1);
  }
  printList(lst);

  // 赋值
  list<int> lst2;
  lst2 = lst;
  printList(lst2);

  // assign(n, elem)
  list<int> lst3;
  lst3.assign(10, 100);
  printList(lst3);

  // assign(begin,end)
  list<int> lst4;
  lst4.assign(lst.begin(), lst.end());
  printList(lst4);

  // 交换
  lst4.swap(lst3);
  cout << "lst4 和 lst3交换" << endl;
  printList(lst3);
  printList(lst4);
}

int main()
{
  test();
  return 0;
}
