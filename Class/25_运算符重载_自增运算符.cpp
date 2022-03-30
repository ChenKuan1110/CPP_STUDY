#include <iostream>

using namespace std;

// 自增运算符

// 自定义整形
class MyInteger
{
  friend ostream &operator<<(ostream &out, MyInteger MyInteger);

public:
  MyInteger()
  {
    m_A = 0;
  }

  // 重载 ++运算符 (前置)
  // 返回引用是为了每一次都对一个数据进行操作
  MyInteger &operator++()
  {
    // 先自增
    m_A++;
    // 后返回
    return *this;
  }

  // 重载后置++运算符
  // operator++(int) int 占位运算符，可以用于区分前置后后置递增
  MyInteger operator++(int)
  {
    // 先保存自增前的结果
    MyInteger tmp = *this;
    // 自增
    m_A++;
    // 再自增
    // 返回保存的结果
    return tmp;
  }

private:
  int m_A;
};

// 内置变量的递增操作
void test()
{
  int a = 10;
  cout << ++a << endl; // 11
  cout << a << endl;   // 11

  int b = 10;
  cout << b++ << endl; // 10
  cout << b << endl;   // 11
}

ostream &operator<<(ostream &out, MyInteger MyInteger)
{
  out << MyInteger.m_A;
  return out;
}

void test1()
{
  MyInteger mI;
  // mI++;
  cout << ++mI << endl;
  cout << ++mI << endl;
  cout << ++mI << endl;
  cout << ++mI << endl;
}

void test2()
{
  MyInteger mInt;
  cout << mInt++ << endl;
  cout << mInt++ << endl;
}

int main()
{
  test();
  cout << "---------" << endl;
  test1();
  cout << "---------" << endl;  
  test2();
  return 0;
}