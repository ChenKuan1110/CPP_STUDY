/**
 * 二元谓词
 * * 返回值是 bool 类型的函数对象
 * * operator() 运算符重载函数参数有两个
*/ 

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class MyCompare
{
  public:
    bool operator() (int v1, int v2)
    {
      return v1 > v2;
    }
};

void printVector(vector<int> &v)
{
  for (vector<int>::iterator it = v.begin(); it != v.end();it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test()
{
  vector<int> v;
  v.push_back(10);
  v.push_back(40);
  v.push_back(20);
  v.push_back(30);
  v.push_back(50);

  cout << "排序前" << endl;
  printVector(v);
  // 排序 默认： 从小到大
  sort(v.begin(), v.end());
  cout << "使用算法 sort 排序后" << endl;
  printVector(v);

  // 利用二源谓词改变排序策略  ： 从大到小
  sort(v.begin(), v.end(), MyCompare());
  cout << "使用二元谓词改变排序规则，修改为从大到小排列后：" << endl;
  printVector(v);
}

int main()
{
  test();
  return 0;
}
