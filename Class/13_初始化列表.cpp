#include <iostream>

using namespace std;

class Person
{
  public:
    // 传统带参数的构造
    // Person(int a, int b, int c)
    // {
    //   cout << "Person 默认构造函数" << endl;
    //   m_A = a;
    //   m_B = b;
    //   m_C = c;
    // }

    // 初始化列表方式
    // 不用赋值，调用时直接 Person p;
    // Person() : m_A(100), m_B(200), m_C(300)
    // {
    //   cout << "初始化列表方式给对象赋初值" << endl;
    // }


    // 初始化列表方式
    Person(int a, int b, int c): m_A(a), m_B(b), m_C(c)
    {
      cout << "初始化列表方式给对象赋初值" << endl;
    }

    ~Person()
    {
      cout << "Person 析构函数" << endl;
    }
    int m_A;
    int m_B;
    int m_C;
};

// 默认参数构造给对象赋初值
void test01()
{
  Person p(1, 2, 3);
  cout << "p: " << p.m_A << " " << p.m_B << " " << p.m_C << endl;
}

// 初始化列表给对象赋初值
void test02()
{
  Person p(101,102,103);
  cout << "p: " << p.m_A << " " << p.m_B << " " << p.m_C << endl;
}

int main()
{
  cout << "调用参数构造函数为对象赋初值" << endl;
  test01();
  cout << "调用参数列表为对象赋初值" << endl;
  test02();
  return 0;
}