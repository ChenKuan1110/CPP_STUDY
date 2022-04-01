/**
 * map 插入 删除
 * insert()
 * clear()
 * erase()
*/
#include <iostream>
using namespace std;
#include <map>

void printMap(map<int,string> &m)
{
  for (map<int, string>::iterator it = m.begin(); it != m.end(); it++)
  {
    cout << (*it).first << " " << it->second << endl;
  }
}

void test()
{
  map<int, string> m;
  // 插入
  m.insert(pair<int, string>(1001, "张三"));
  m.insert(make_pair(1002, "李四"));
  m.insert(map<int, string>::value_type(1003, "王五"));
  m[1004] = "赵六"; // 不建议使用这种方式插入值

  // cout << m[5] << endl;
  cout << m[1004] << endl;

  printMap(m);

  // 删除
  // 删除指定迭代器位置
  cout << "删除指定位置：删第一个" << endl;
  m.erase(m.begin());
  printMap(m);

  // 删除区间
  cout << "删除区间： 第二个到倒数第二个" << endl;
  m.erase(++m.begin(), --m.end()); // 删除 开始到倒数第二个键值对
  printMap(m);

  // 删除指定 key
  cout << "删除指定值: 1002" << endl;
  m.erase(1002);
  printMap(m);

  // 清空
  cout << "清空" << endl;
  m.clear();
  printMap(m);
}

int main()
{
  test();
  return 0;
}
