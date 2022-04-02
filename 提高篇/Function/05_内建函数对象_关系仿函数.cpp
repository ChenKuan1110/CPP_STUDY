/**
 * 内建函数对象
 * 逻辑仿函数
 * * equal_to
 * * not_equal_to
 * * greater
 * * greater_equal
 * * less
 * * less_equal
*/ 

#include <iostream>
using namespace std;
#include <functional>
#include <vector>
#include <algorithm>

void test1()
{
  equal_to<int> eq;
  cout << "3 = 4 : " << eq(3, 4) << endl;
  cout << "1 = 1 : " << eq(1, 1) << endl;

  not_equal_to<int> neq;
  cout << "3 != 4 : " << neq(3, 4) << endl;
  cout << "1 != 1 : " << neq(3, 4) << endl;

  greater<int> gt;
  cout << "3 > 4 : " << gt(3, 4) << endl;
  cout << "4 > 3 : " << gt(4, 3) << endl;

  greater_equal<int> gte;
  cout << "3 >= 4 : " << gte(3, 4) << endl;
  cout << "4 >= 3 : " << gte(4, 3) << endl;

  less<int> lt;
  cout << "3 < 4 : " << lt(3, 4) << endl;
  cout << "4 < 3 : " << lt(4, 3) << endl;

  less_equal<int> lte;
  cout << "3 <= 4 : " << lte(3, 4) << endl;
  cout << "4 <= 3 : " << lte(4, 3) << endl;
}

void printVector(vector<int> &v)
{
  for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test2()
{
  vector<int> v;
  v.push_back(10);
  v.push_back(50);
  v.push_back(30);
  v.push_back(40);
  v.push_back(20);

  cout << "没有排序前：";
  printVector(v);

  cout << "使用默认的 sort 算法排序" << endl;
  sort(v.begin(), v.end());
  printVector(v);

  cout << "利用内置函数对象中的算数仿函数 greater 来排序：" << endl;
  sort(v.begin(), v.end(), greater<int>());
  printVector(v);
}

int main()
{
  test1();
  cout << string(50, '-') << endl;
  test2();
  return 0;
}
