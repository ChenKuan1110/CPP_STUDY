/**
 * map 构造和赋值
 */
#include <iostream>
using namespace std;
#include <map>

void printMap(map<int,int> &m)
{
  for (map<int, int>::const_iterator it = m.begin(); it != m.end();it++)
  {
    cout << "(key = " << (*it).first << ", value = " << it->second <<  ") " << endl;
  }
  cout << endl;
}

void test()
{
  // 默认构造
  map<int, int> m;
  // 插入元素
  m.insert(pair<int,int>(1, 10));
  m.insert(pair<int,int>(3, 30));
  m.insert(pair<int,int>(2, 20));
  m.insert(pair<int,int>(4, 40));
  printMap(m);

  // 拷贝构造
  map<int, int> m2(m);
  printMap(m2);

  // 赋值
  map<int, int> m3;
  m3 = m2;
  printMap(m3);
}

int main()
{
  test();
  return 0;
}
