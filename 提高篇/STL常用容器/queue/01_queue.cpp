#include <iostream>
using namespace std;
#include <queue>

// STL queue 基本使用
void test()
{
  queue<int> que;
  que.push(11);
  que.push(22);
  que.push(33);
  que.push(44);

  queue<int> que1(que); // 拷贝构造

  cout << "que 大小：" << que.size() << endl;

  while(!que.empty())
  {
    cout << "此时队头元素：" << que.front() << endl;
    que.pop();
  }
  cout << "que 大小：" << que.size() << endl;
  cout << "que1 大小：" << que1.size() << endl;

  cout << "que1 队头：" << que1.front() << endl;
  cout << "que1 队尾：" << que1.back() << endl;
}

int main()
{
  test();
  return 0;
}
