/**
 * set 和 multiset 的区别
 * 1. set不可以插入相同数据，multiset可以
 * 2. set 插入方法会返回插入的结果，表示插入是否成功
*/ 

#include <iostream>
using namespace std;
#include <set>

void test()
{
  set<int> s;
  pair<set<int>::iterator, bool> ret =  s.insert(10);

  if(ret.second)
  {
    cout << "第一次插入成功" << endl;
  }
  else
  {
    cout << "第一次插入失败" << endl;
  }
  ret =  s.insert(10);

  if(ret.second)
  {
    cout << "第二次插入成功" << endl;
  }
  else
  {
    cout << "第二次插入失败" << endl;
  }
}

void test1()
{
  multiset<int> ms;
  ms.insert(10);
  ms.insert(20);
  ms.insert(10); // 返回值类型 为迭代器

  for (multiset<int>::iterator it = ms.begin(); it != ms.end();it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

int main()
{
  test();
  test1();
  return 0;
}
