/**
 * 利用 仿函数改变 map 容器的默认排序规则
*/

#include <iostream>
using namespace std;
#include <map>

// 自定义比较仿函数
class MyCompare
{
  public:
    bool operator()(int v1, int v2) const
    {
      return v1 > v2;
    }
};

void
test()
{
  map<int, string, MyCompare> m;
  m.insert(make_pair(1001, "张三"));
  m.insert(make_pair(1002, "李四"));
  m.insert(make_pair(1003, "王五"));
  m.insert(make_pair(1004, "赵六"));

  for (map<int, string, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
  {
    cout << it->first << " " << it->second << endl;
  }
}

int main()
{
  test();
  return 0;
}
