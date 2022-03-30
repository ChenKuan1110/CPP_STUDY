#include <iostream>

using namespace std;

class Person
{
  public:
    Person()
    {
      cout << "Person 默认构造函数调用" << endl;
    }
    Person(string name, int height)
    {
      cout << "Person 有参构造函数调用" << endl;
      m_Name = name;
      m_Height = new int(height);
    }

    // 自己实现一个拷贝构造函数来解决浅拷贝析构时，重复释放堆内存的问题
    // 利用深拷贝
    Person(const Person &p)
    {
      cout << "Person 拷贝构造函数调用" << endl;
      m_Name = p.m_Name;
      // 下面这句代码如果不提供该拷贝构造函数，由编译器自动实现
      // 因为 m_height 是指针，指向堆区数据
      // 当对象销毁时，会将 m_Height 在堆区的数据释放，当有利用拷贝构造出来的对象被释放，原对象也被释放的时候
      // m_Height 就找不到在堆区的数据，因此造成了释放一个已被释放的数据，所以会报错：指向的地址还未分配
      // m_Height = p.m_Height;

      // 利用深拷贝解决上述问
      // 为该对象在堆区中重新开辟一个空间
      m_Height = new int(*p.m_Height);
    }
    ~Person ()
    {
      cout << "Person 析构函数调用" << endl;
      // 析构函数，将堆区开辟的数据释放
      if(m_Height != NULL)
      { 
        delete m_Height;
        m_Height = NULL;
      }
    }
    string m_Name; // 姓名
    int *m_Height; // 身高
};

void test01()
{
  Person p1("张三", 180);

  cout << "p1 姓名：" << p1.m_Name << "身高" << *p1.m_Height << endl;

  Person p2(p1);
  cout << "p2 姓名：" << p2.m_Name << "身高" << *p1.m_Height << endl;
  
}

int main()
{
  test01();
  return 0;
}