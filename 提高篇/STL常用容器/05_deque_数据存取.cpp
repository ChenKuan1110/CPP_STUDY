#include <iostream>
using namespace std;
#include <deque>

// deque 数据存取

void test()
{
  deque<int> d;
  // [] 元算符赋值
  for (int i = 0; i < 10;i++)
  {
    d.push_back(i + 1);
  }

  // 第一个元素和最后一个元素
  cout << "d.front() : " << d.front() << endl;
  cout << "d.back() : " << d.back() << endl;

  // 下标获取
  for (int i = 0; i < 10; i++)
  {
    cout << d[i] << " ";
  }
  cout << endl;

  // 下标操作
  d[5] = d[5] * d[5];

  // at() 获取
  for (int i = 0; i < 10; i++)
  {
    cout << d.at(i) << " ";
  }
  cout << endl;

}

int main()
{
  test();
  return 0;
}
