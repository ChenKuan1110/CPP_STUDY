#include <iostream>
#include "13_person.cpp" // 解决方式1: 将 导入的 .h 修改为 .cpp（直接包含源文件）

// 解决方式2: 将 .cpp 和 .h 文件合并 

void test()
{
  Person<string, int> p1("李四", 19);
  p1.showInfo();
}

int main()
{
  test();
  return 0;
}