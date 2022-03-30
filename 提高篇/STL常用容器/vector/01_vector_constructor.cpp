#include <iostream>
using namespace std;
#include <vector>

// vector 构造函数


// 公共方法，打印 vector 元素
void printVector(vector<int> &v)
{
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}


void test1()
{
  // 默认构造 模版
  vector<int> v1;
  for (int i = 0; i < 10;i++)
  {
    v1.push_back(i + 1);
  }
  printVector(v1);

  // 通过区间构造
  vector<int> v2(v1.begin(), v1.end());
  printVector(v2);


  // 利用 n 个元素构造
  vector<int> v3(10, 1);
  printVector(v3);


  // 拷贝构造
  vector<int> v4(v2);
  printVector(v4);
}

int main()
{
  test1();
  return 0;
}