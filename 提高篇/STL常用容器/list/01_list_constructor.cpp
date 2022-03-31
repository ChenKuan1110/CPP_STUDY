#include <iostream>
using namespace std;
#include <list>

// list 构造函数

//工具函数 打印list 元素
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
  // 默认构造
  list<int> lst;

  // 添加数据
  lst.push_back(1);
  lst.push_back(2);
  lst.push_back(3);
  lst.push_back(4);

  printList(lst);

  // n 个元素构造
  list<int> lst1(10, 100);
  printList(lst1);

  // [begin,end) 方式构造
  list<int> lst2(lst1.begin(), lst1.end());
  printList(lst2);

  // 拷贝构造
  list<int> lst3(lst);
  printList(lst3);
}

int main()
{
  test();
  return 0;
}
