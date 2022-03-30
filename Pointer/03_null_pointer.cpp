#include <iostream>

using namespace std;

int main()
{
  int *p = NULL; // 空指针

  // 内存地址 0-255 是系统占用的，不能够访问

  cout << p << endl; // 0x0
  cout << *p << endl; // 报错， [1]    71940 segmentation fault  ./03_null_pointer
  return 0;
}