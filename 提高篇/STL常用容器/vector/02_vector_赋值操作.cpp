#include <iostream>
#include <vector>
using namespace std;

// vector 赋值操作

void printVectorInt(vector<int> &v)
{
  for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test()
{
  vector<int> v1;
  for (int i = 0; i < 10;i++)
  {
    v1.push_back(i + 1);
  }

  // 重载 operator= 运算符 方式
  vector<int> v2;
  v2 = v1;
  printVectorInt(v2);

  // assign(begin, end) 方式
  vector<int> v3;
  v3.assign(v1.begin(), v1.end());
  printVectorInt(v3);

  // assign(n, elem) 方式
  vector<int> v4;
  v4.assign(10, 110);
  printVectorInt(v4);
}

int main()
{
  test();
  return 0;
}