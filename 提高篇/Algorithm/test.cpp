// 集合元素求交集、并集、差集

#include <iostream>
using namespace std;
#include <set>
#include <vector>
#include<algorithm>

void printFn(int v)
{
  cout << v << " ";
}

void test()
{
  set<int> s1;
  set<int> s2;

  s1.insert(1);
  s1.insert(2);
  s1.insert(3);
  s1.insert(4);

  s2.insert(4);
  s2.insert(6);
  s2.insert(8);

  cout << "s1: ";
  for_each(s1.begin(), s1.end(), printFn);
  cout << endl;

  cout << "s2: ";
  for_each(s2.begin(), s2.end(), printFn);
  cout << endl;

  // 交集
  vector<int> ret;
  ret.resize(min(s1.size(), s2.size()));

  vector<int>::iterator endPos = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), ret.begin());

  cout << "集合 s1 与 s2 交集：" ;
  for_each(ret.begin(), endPos, printFn);
  cout << endl;

  // 并集
  vector<int> ret2;
  ret2.resize(s1.size(), s2.size());
  vector<int>::iterator endPos2 = set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), ret2.begin());
  cout << "集合 s1 与 s2 并集：" ;
  for_each(ret2.begin(), endPos2, printFn);
  cout << endl;

  // 差集
  vector<int> ret3_1;
  ret3_1.resize(s1.size());
  vector<int>::iterator endPos3_1 = set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), ret3_1.begin());
  cout << "集合 s1 与 s2 差集：" ;
  for_each(ret3_1.begin(), endPos3_1, printFn);
  cout << endl;

  // 差集
  vector<int> ret_3_2;
  ret_3_2.resize( s2.size());
  vector<int>::iterator endPos3_2 = set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), ret_3_2.begin());
  cout << "集合 s2 与 s1 差集：" ;
  for_each(ret_3_2.begin(), endPos3_2, printFn);
  cout << endl;
}

int main()
{
  test();
  return 0;
}
