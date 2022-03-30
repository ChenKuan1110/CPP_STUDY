#include <iostream>
using namespace std;
#include <vector>


void printVector(vector<int> &v)
{
  for (vector<int>::iterator it = v.begin(); it != v.end(); it ++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void test()
{
  vector<int> v;
  cout << "初始化 vector<int> v" << endl;
  cout << "empty() :" << v.empty() << endl;
  cout << "capacity(): " << v.capacity() << endl;
  cout << "size() :" << v.size() << endl;

  cout << "添加数据" << endl;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);

  cout << "empty() :" << v.empty() << endl;
  cout << "capacity(): " << v.capacity() << endl;
  cout << "size() :" << v.size() << endl;
  cout << "元素：";
  printVector(v);

  // 重新制定大小
  cout << "指定大小为10" << endl;
  v.resize(10);

  cout << "empty() :" << v.empty() << endl;
  cout << "capacity(): " << v.capacity() << endl;
  cout << "size() :" << v.size() << endl;
  cout << "元素：";
  printVector(v);


  // 改变大小，如果大于原大小，利用 元素填充
  cout << "填充 1" << endl;
  v.resize(15, 1);
  cout << "empty() :" << v.empty() << endl;
  cout << "size() :" << v.size() << endl;
  cout << "元素：";
  printVector(v);
}

int main()
{
  test();
  return 0;
}