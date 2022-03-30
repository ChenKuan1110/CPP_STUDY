#include <iostream>
using namespace std;
#include <vector>

// vector 插入和删除

void printVector(vector<int> &v)
{
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test()
{
  vector<int> v;

  // 尾部追加
  for (int i = 0; i < 10; i++)
  {
    v.push_back(i + 1);
  }
  printVector(v);

  // 删除尾部元素
  v.pop_back();
  printVector(v);

  // 利用迭代器插入 // 第一个参数是迭代器
  v.insert(v.begin(), 100);
  printVector(v);

  // 利用迭代器插入 n 个 元素
  v.insert(v.begin(), 2, 200);
  printVector(v);


  // 删除 迭代器指向的元素
  v.erase(v.begin());
  printVector(v);

  // 删除从迭代器 start 到 end 直接的元素
  v.erase(v.begin(), v.end());
  printVector(v);

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  printVector(v);

  // 清除所有
  v.clear();
  printVector(v);
}

int main()
{
  test();
  return 0;
}
