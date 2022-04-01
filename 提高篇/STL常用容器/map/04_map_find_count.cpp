/**
 * map 查找和统计
 * find()
 * count()
 */
#include <iostream>
using namespace std;
#include <map>

void test()
{
  map<int, string> m;
  m.insert(make_pair(1001, "张三"));
  m.insert(make_pair(1002, "李四"));
  m.insert(make_pair(1003, "王五"));
  m.insert(make_pair(1004, "赵六"));

  // find（）
  map<int, string>::iterator pos = m.find(1002);
  if (pos!= m.end())
  {
    cout << "容器中有 key为 " << pos->first << "的元素, 值为： " << pos->second << endl;
  }
  else
  {
    cout << "没有找到 key为 1002 的键值对" << endl;
  }

  // count
  // multimap的统计可能大于1
  cout << "统计个数：m.count(1001): " << m.count(1001) << endl;
}

int main()
{
  test();
  return 0;
}
 