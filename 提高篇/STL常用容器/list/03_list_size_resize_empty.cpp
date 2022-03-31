#include <iostream>
using namespace std;
#include <list>

// list 大小操作

void printList(const list<int> &lst)
{
  cout << "\t";
  for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}


void test()
{
  list<int> lst;
  cout << (lst.empty() ? "list为空": "list 不为空") << endl;
  cout << "size: " << lst.size() << endl;
  cout << "插入 1-10 " << endl;
  for (int i = 0; i < 10; i++)
  {
    lst.push_back(i + 1);
  }

  // 判断空
  cout << (lst.empty() ? "list为空": "list 不为空") << endl;
  // 获取元素个数
  cout << "size: " << lst.size() << endl;
  printList(lst);

  // resize
  cout << "resize(5)" << endl;
  lst.resize(5);
  cout << "size: " << lst.size() << endl;
  printList(lst);
  // resize(18, 100);
  cout << "resize(18, 100)" << endl;
  lst.resize(18, 100);
  cout << "size: " << lst.size() << endl;
  printList(lst);
}

int main()
{
  test();
  return 0;
}
