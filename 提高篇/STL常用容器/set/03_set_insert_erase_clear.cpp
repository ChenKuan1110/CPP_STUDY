/**
 * set 插入和删除方法
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

// 插入操作
void test1()
{
  cout << string(10,'-') << "set 插入：" << string(10,'-') << endl;
  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(-1);
  s.insert(10);
  printSet(s);
}

// set 删除
void test2()
{
  cout << string(10, '-') << "set 删除方法" << string(10,'-') << endl;

  set<int> s;
  for (int i = 0; i < 20;i++)
  {
    s.insert(i + 1);
  }
  cout << "原集合：" << endl;
  printSet(s);

  // erase(elem);
  s.erase(10);
  cout << "利用 erase(10) 删除值为 10 的元素" << endl;
  cout << "删除后：";
  printSet(s);

  // erase(pos)
  set<int>::iterator it = s.begin();
  cout << "利用 erase(pos) 删除 第二个元素" << endl;
  cout << "删除后 ：";
  s.erase(++it);
  printSet(s);

  // erase(pos, end);
  it = s.begin();
  cout << "利用 erase(beg,end)删除 从第二个元素到倒数第二个 元素" << endl;
  cout << "删除后：";
  s.erase(++s.begin(), --s.end());
  printSet(s);

  // clear()
  cout << "利用 clear() 清空集合" << endl;
  cout << "清空后：";
  s.clear();
  printSet(s);
}


int main()
{
  test1();
  test2();
  return 0;
}
