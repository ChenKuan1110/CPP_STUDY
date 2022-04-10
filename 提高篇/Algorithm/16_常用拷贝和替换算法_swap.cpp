/**
 * swap(container c1, container c3)
*/
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void printFn(int v)
{
  cout << v << " ";
}

void test()
{
  vector<int> v1;
  v1.push_back(10);
  v1.push_back(20);
  v1.push_back(40);
  v1.push_back(20);
  v1.push_back(500);
  v1.push_back(120);

  vector<int> v2;
  for (int i = 0; i < 10;i++)
  {
    v2.push_back((i + 1) * 10);
  }

  cout << "交换前：" << endl;
  cout << "v1: " << endl;
  for_each(v1.begin(), v1.end(), printFn);
  cout << endl;
  cout << "v2: " << endl;
  for_each(v2.begin(), v2.end(), printFn);
  cout << endl;

  // 实现交换
  swap(v1, v2);

  cout << "交换后：" << endl;
  cout << "v1: " << endl;
  for_each(v1.begin(), v1.end(), printFn);
  cout << endl;
  cout << "v2: " << endl;
  for_each(v2.begin(), v2.end(), printFn);
  cout << endl;
}

int main()
{
  test();
  return 0;
}
