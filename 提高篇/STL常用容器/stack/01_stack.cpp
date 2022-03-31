#include <iostream>
using namespace std;
#include <stack>

void test()
{
  stack<int> stk; // 默认构造
  stk.push(1); // 入栈
  stk.push(2);
  stk.push(3);
  stk.push(4);
  stk.push(5);

  int topElem = stk.top(); // 返回栈顶元素
  cout << "栈顶元素: " << topElem << endl;
  stk.pop(); // 出栈
  topElem = stk.top();
  cout << "栈顶元素: " << topElem << endl;

  stack<int> stk1(stk); // 拷贝构造
  bool isEmp = stk1.empty(); // 判断是否为空
  cout << (isEmp ? "stk1 为空" : "stk1 不为空") << endl;
  int len = stk1.size(); // 获取栈元素
  cout << "stk1 栈元素个数：" << len << endl;
}

int main()
{
  test();
  return 0;
}
