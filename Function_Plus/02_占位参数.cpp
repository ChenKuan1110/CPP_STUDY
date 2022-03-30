#include <iostream>

using namespace std;


// 函数占位参数，占位参数也可以有默认参数
// 目前阶段占位参数暂时用不到
void func(int a, int = 2){
  cout << "function func is invoked" << endl;
}

int main()
{
  func(10, 20); // 占位参数必须填补

  return 0;
}