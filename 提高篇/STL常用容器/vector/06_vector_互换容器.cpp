#include <iostream>
using namespace std;
#include <vector>

// vector 容器互换

void printVector(vector<int> &v)
{
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

// 基本使用
void test()
{
  vector<int> v1;
  vector<int> v2;

  for (int i = 0; i < 10;i++)
  {
    v1.push_back(i + 1);
    v2.push_back(10-i);
  }
  cout << "交换前" << endl;
  printVector(v1);
  printVector(v2);

  // 交换
  v1.swap(v2);
  cout << "交换后" << endl;
  printVector(v1);
  printVector(v2);
}

// 实际用途
// 巧用 swap 能够收缩内存空间
void test1()
{
  vector<int> v;
  cout << "放入 10000个数到 vector<int> v" << endl;
  for (int i = 0; i < 100000; i++)
  {
    v.push_back(i);
  }

  cout << "v的容量：" << v.capacity() << endl;
  cout << "v的大小：" << v.size() << endl;

  // 从新指定大小
  cout << "从新指定大小 : 3" << endl;
  v.resize(3);
  cout << "v的容量：" << v.capacity() << endl; // 此刻的容量依旧为之前的容量大小
  cout << "v的大小：" << v.size() << endl;


  // 利用 swap ， 收缩内存
  // // vector<int>(v) 匿名对象 ,相当于利用拷贝构造了一个新的 vector<int>实例
  // 利用编译器回收匿名对象的特性来实现“交换”
  vector<int>(v).swap(v); 
  cout << "利用 swap 收缩内存后" << endl;
  cout << "v的容量：" << v.capacity() << endl; // 此刻的容量依旧为之前的容量大小
  cout << "v的大小：" << v.size() << endl;
}

int main()
{
  // test();
  test1();
  return 0;
}
