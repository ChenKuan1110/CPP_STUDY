#include <iostream>

using namespace std;

void test()
{
  string str1; // 默认构造
  string str2("hello, std string"); // string(const char *)
  string str3(str2); // 拷贝构造
  string str4(10, '*'); // string(int n , char c)

  cout << str1 << endl;
  cout << str2 << endl;
  cout << str3 << endl;
  cout << str4 << endl;
}

int main()
{
  test();
  return 0;
}