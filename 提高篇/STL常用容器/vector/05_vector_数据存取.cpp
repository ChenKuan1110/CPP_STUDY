#include <iostream>
using namespace std;
#include <vector>

// vector 数据存取

void test()
{
  vector<int> v;
  for (int i = 0; i < 10;i++)
  {
    v.push_back(i+1);
  }

  cout << "最后一个元素：" << v.back() << endl;
  cout << "第一个元素: " << v.front() << endl;

  cout << "第二个元素 ：" << v.at(1) << endl;
  cout << "第5个元素：" << v[4] << endl;

  cout << string(30, '-') << endl;

  v[1] = v[1] * 10;
  v.at(5) = v.at(5) * 3;

  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

int main()
{
  test();
  return 0;
}
