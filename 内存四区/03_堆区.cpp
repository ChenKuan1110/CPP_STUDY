# include <iostream>

using namespace std;

int * func()
{
  // 利用 new 关键字，可以将数据开辟到堆区
  int * p = new int(10);
  return p;
}

int main()
{
  // 在堆区开辟数据
  int *p = func();
  cout << *p << endl;
  cout << *p << endl;
  cout << *p << endl;
  cout << *p << endl;
  
  cout << p << endl;

  return 0;
}