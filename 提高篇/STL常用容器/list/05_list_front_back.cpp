#include <iostream>
using namespace std;
#include <list>
#include <vector>

// list 数据存取

void test()
{
  list<int> lst;
  lst.push_back(10);
  lst.push_back(20);
  lst.push_back(30);
  lst.push_back(40);

  // front() 获取第一个元素
  cout << "第一个元素 : " << lst.front() << endl;

  // back() 获取最后一个元素
  cout << "最后一个元素 : " << lst.back() << endl;

  // 不支持下标访问和 at 访问
  // 原因： list 本质是链表，不是连续的线性空间存储数据 迭代器也是不支持随机访问的


  // 验证 list迭代器是不支持随机访问的
  list<int>::iterator it = lst.begin();

  it++; // 支持双向
  it--;
  // it = it + 1; // 报错： 没有匹配的 + 运算符 说明不支持随机访问

  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  vector<int>::iterator it_v = v.begin();
  it_v = it_v + 2; // vector 迭代器支持随机访问
}

int main()
{
  test();
  return 0;
}
