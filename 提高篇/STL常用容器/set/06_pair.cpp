/**
 * pair 创建方式
*/

#include <iostream>
using namespace std;

void test()
{
  // 创建方式1
  pair<int, string> p(10, "hello");

  // 创建方式2
  pair<int, string> user = make_pair(1001, "张三");

  cout << "用户id:" << user.first << " 姓名：" << user.second << endl;
}

int main()
{
  test();
  return 0;
}
