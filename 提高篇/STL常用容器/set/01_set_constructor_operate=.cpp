/**
 * set构造方法和赋值操作
 */ 
#include <iostream>
using namespace std;
#include <set>

void printSet(set<int> &s)
{
  for (set<int>::iterator it = s.begin(); it != s.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test()
{
  // 默认构造
  set<int> st;

  // 插入数据
  st.insert(1);
  st.insert(1);
  st.insert(4);
  st.insert(5);
  st.insert(20);
  st.insert(11);

  // 遍历容器
  // set容器特点
  // 1. 所有元素插入时会被自动排序
  // 2. set容器重复值插入，只会保留一个
  printSet(st);


  // 拷贝构造
  set<int> s2(st);
  printSet(s2);


  // 赋值操作
  set<int> s3;
  s3 = s2;
  printSet(s3);
}


// multiset 
// 允许插入相同的元素
void test2()
{
  cout << "multiset:" << endl;
  multiset<int> ms;
  ms.insert(1);
  ms.insert(8);
  ms.insert(7);
  ms.insert(4);
  ms.insert(4);
  ms.insert(3);

  for (multiset<int>::iterator it = ms.begin(); it != ms.end();it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

int main()
{
  test();
  test2();
  return 0;
}
