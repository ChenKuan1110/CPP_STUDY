/**
 * set 容器的查找 和 统计
*/
#include <iostream>
using namespace std;
#include <set>

// 查找
void test()
{
  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(1);
  s.insert(3);
  s.insert(4);

  // find(key)
  set<int>::iterator ret = s.find(1);
  cout << "find(1) :" << *ret << endl;

  cout << "* find(100): " << *s.find(100) << endl;
  cout << "* s.end() :" << *s.end() << endl;

  set<int>::iterator pos = s.find(100);
  if (pos!= s.end())
  {
    cout << "找到元素" << *pos << endl;
  }
  else
  {
    cout << "没有找到元素" << endl;
  }
}

// 统计
void test1()
{
  set<int> s;
  s.insert(10);
  s.insert(20);
  s.insert(30);
  s.insert(40);
  s.insert(20);

  cout << "cout(10): " << s.count(10) << endl;
  cout << "cout(20): " << s.count(20) << endl;
}

int main()
{
  test();
  test1();
  return 0;
}
