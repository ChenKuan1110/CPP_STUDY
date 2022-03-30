#include <iostream>

using namespace std;

template <typename T1, typename T2>
class Person;

// 全局函数类外实现
// 需要让编译器先知道这是一个全局的函数模版
template <typename T1, typename T2>
void printInfo2(Person<T1,T2> p){
  cout << "类外实现 --- 姓名：" << p.m_name << " 年龄: " << p.m_age << endl;
};


template <typename T1, typename T2>
class Person
{
  // 全局函数 类内实现
  friend void printInfo(Person<T1, T2> p)
  {
    cout << "姓名：" << p.m_name << " 年龄：" << p.m_age << endl;
  }

  // 全局函数类外实现
  // 使用 空模版参数，告诉编译器，这是一个全局模版函数
  friend void printInfo2<>(Person<T1,T2> p);

private:
  T1 m_name;
  T2 m_age;

public:
  Person(T1 name, T2 age)
  {
    m_name = name;
    m_age = age;
    }
};

// 全局函数模版 类内全局函数调用
void test1()
{
  Person<string, int> p("张三", 18);
  printInfo(p);
}



void test2()
{
  Person<string, int> p("李四", 20);
  printInfo2(p);
}

int main()
{
  test1();
  test2();
  return 0;
}