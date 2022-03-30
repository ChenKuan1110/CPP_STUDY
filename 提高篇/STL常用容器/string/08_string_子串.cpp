#include <iostream>
using namespace std;

void test()
{
  string str = "hello, world";
  cout << str.substr(0, 5) << endl; 
  cout << str << endl;
}

void test1()
{
  string email = "zhangsan@qq.com";
  cout << "用户名是: " << email.substr(0, email.find("@")) << endl;
}

int main()
{
  test();
  test1();
  return 0;
}