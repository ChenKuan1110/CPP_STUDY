#include <iostream>
using namespace std;

void test()
{
  string str1 = "hello, a";
  string str2 = "hello, b";

  int ret = str1.compare(str2);
  cout << ret << endl;
}

int main()
{
  test();
  return 0;
}