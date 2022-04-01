/**
 * set 大小 判空 交换 方法
 */ 
#include <iostream>
using namespace std;
#include <set>


void printSet(const set<int> s)
{
  for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test()
{
  set<int> s;
  if(s.empty())
  {
    cout << "集合容器 s 为空" << endl;
    cout << "集合中元素个数：" << s.size() << endl;
  }
  else
  {
    cout << "集合中元素个数：" << s.size() << endl;
    printSet(s);
  }
}

void test2()
{
  set<int> s1;
  s1.insert(10);
  s1.insert(40);
  s1.insert(30);

  set<int> s2;
  s2.insert(10);
  s2.insert(1);
  s2.insert(40);
  s2.insert(100);
  s2.insert(-1);

  cout << "交换前：" << endl;
  printSet(s1);
  printSet(s2);

  // 交换
  s1.swap(s2);
  cout << "交换后：" << endl;
  printSet(s1);
  printSet(s2);
}

int main()
{
  test();
  cout << string(40, '-') << endl;
  test2();
  return 0;
}
