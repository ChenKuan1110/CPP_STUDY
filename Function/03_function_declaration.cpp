#include <iostream>

using namespace std;

// 函数声明
int max(int, int);

int main()
{
  int a = 10, b = 20;
  cout << max(a, b) << endl;
  return 0;
}

int max(int x, int y)
{
  return x > y ? x : y;
}