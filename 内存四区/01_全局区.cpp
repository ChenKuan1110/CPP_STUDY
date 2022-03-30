# include <iostream>

using namespace std;

// 全局变量
int g_a = 100;
int g_b = 200;

// const 修饰的全局变量
const int c_g_a = 10;

int main()
{
  // 局部变量
  int a = 10;
  int b = 20;

  cout << "局部变量 a 的地址：" << &a << endl;
  cout << "局部变量 b 的地址：" << &b << endl;

  cout << "全局变量 g_a 的地址：" << &g_a << endl;
  cout << "全局变量 g_b 的地址：" << &g_b << endl;

  // 静态变量： 定义变量前加 static 关键字
  static int s_a = 10;
  static int s_b = 10;

  cout << "静态变量 s_a 的地址：" << &s_a << endl;
  cout << "静态变量 s_b 的地址：" << &s_b << endl;


  /** 常量 */
  // 字符串常量
  cout << "字符串常量的地址：" << &"hello,world" << endl;
  // const 修饰的变量
  // 
  const int AGE = 20;
  cout << "const 局部常量 AGE 的地址：" << &AGE << endl;
  cout << "const 全局常量 c_g_a 的地址：" << &c_g_a << endl;

  return 0;
}