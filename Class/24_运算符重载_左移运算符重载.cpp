#include <iostream>

using namespace std;

// 左移运算符重载 （用于输出）

class Person
{
  // 利用友元访问私有变量
  friend ostream &operator<<(ostream &cout, Person &p);
  int m_A;
  int m_B;

public:
  Person() {}
  Person(int a, int b)
  {
    m_A = a;
    m_B = b;
    }

    // 本质： p.operator(cout) -> p << cout 与本意不符合，所以利用全局函数进行重载
    // void operator<< (cout)
    // {

    // }
};

// 利用全局函数进行左移 operator<< (cout, p) ==> cout << p;
ostream & operator<<(ostream &cout, Person &p)
{
  cout << "m_A: " << p.m_A << " m_B: " << p.m_B ;
  return cout;
}

void test()
{
  Person p(10, 20);
  cout << p << endl;
}

int main()
{
  test();
  return 0;
}