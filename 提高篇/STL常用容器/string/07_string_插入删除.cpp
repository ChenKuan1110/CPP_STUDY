#include <iostream>
using namespace std;


// 字符串插入
void test()
{
  string str = "hello";
  cout << str << endl;

  cout <<str.insert(4, ", world") << endl;
  cout << str << endl;

  cout << str.insert(7, 5, '*') << endl;
  cout << str << endl; 

}

// 字符串删除
void test1()
{
  string str = "hello, world";
  cout << str << endl;
  str.erase(2);
  cout << str << endl;
}

int main()
{
  test();
  cout << string(50, '-') << endl;
  test1();
  return 0;
}