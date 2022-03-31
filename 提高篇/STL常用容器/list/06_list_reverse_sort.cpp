#include <iostream>
using namespace std;
#include <list>
#include <ctime>

// list 反转和排序

void printList(const list<int> lst)
{
  for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

// 自己实现的降序排序的函数
bool myCompare(int v1, int v2)
{
  // 降序 让第一个数 大于 第二个数
  return v1 > v2;
}

void test()
{
  list<int> lst;
  for (int i = 0; i < 10;i++)
  {
    lst.push_back(i * rand() % 100);
  }
  cout << "反转前 ：" << endl;
  printList(lst);

  // 反转
  cout << "反转后 ：" << endl;
  lst.reverse();
  printList(lst);

  // 排序
  // 利用 list 的sort 算法
  // 注意： 所有不支持随机迭代器的容器，不能使用 algorithm 中的标准排序算法
  cout << "默认排序(升序)：" << endl;
  lst.sort(); // 默认排序规则： 升序
  printList(lst);

  // 如需需要降序，需要自己实现其sort算法函数
  cout << "降序：" << endl;
  lst.sort(myCompare);
  printList(lst);
}

int main()
{
  srand((unsigned int)time(NULL));
  test();
  return 0;
}
