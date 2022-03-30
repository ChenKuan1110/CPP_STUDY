#include <iostream>

using namespace std;

// 赋值运算符重载
// 可能会出现的问题： 当对象的成员变量中有指针时，当利用 = 运算符时，会导致浅拷贝的问题（重复析构堆区，导致程序崩溃）

class Person
{
  public:
    Person(int age)
    {
      m_age = new int(age);
    }
    ~Person ()
    {
      if(m_age != NULL)
      {
        delete m_age;
        m_age = NULL;
      }
    }

    // 赋值运算符重载
    Person& operator=(Person & p)
    {

      // 编译器提供的是
      // m_age = p.m_age;

      // 判断是否有内存在堆区，如果有先释放干净，然后再进行深拷贝
      if(m_age != NULL)
      {
        delete m_age;
        m_age = NULL;
      }
      // 深拷贝
      m_age = new int(*p.m_age);
      return *this;
    }

    int *m_age;
};

void test()
{
  Person p1(18);
  Person p2(20);
  Person p3(30);

  p3 = p2 = p1; // 赋值运算


  cout << "p1年龄：" << *p1.m_age << endl;
  cout << "p2年龄：" << *p2.m_age << endl;
  cout << "p3年龄：" << *p3.m_age << endl;
}

void test1()
{
  int a = 10;
  int b = 20;
  int c = 30;

  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  cout << "c=" << c << endl;
}

int
main()
{
  test1();
  cout << "------------" << endl;
  test();
  return 0;
}