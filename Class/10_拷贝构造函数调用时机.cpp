#include <iostream>

using namespace std;
#include <string>

/*
  拷贝构造函数使用时机

* 使用一个已经创建完毕的对象来初始化一个新对象
* 值传递的方式给函数参数传值
* 以值方式返回局部对象
*/

class Person
{
public:
  Person()
  {
    cout << "Person 类无参构造函数调用" << endl;
  }
  Person(string name)
  {
    cout << "Person 类有参构造函数调用" << endl;
    s_name = name;
  }
  // 拷贝构造
  Person(const Person &p)
  {
    cout << "Person 类拷贝构造函数调用" << endl;
    s_name = p.s_name;
  }
  ~Person()
  {
    cout << "Person 类析构函数被调用" << endl;
  }
  string s_name;
};

// 使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
  Person p1; // 默认构造
  Person p2("张三"); // 参数构造
  Person p3(p2); // 拷贝构造

  cout << "p2的姓名为：" << p2.s_name << endl;
}

// 值传递的方式给函数参数传值
void doWork(Person p)
{
  cout << "doWork func" << endl;
}

void test02()
{
  Person p1;
  doWork(p1);
}

// 以值方式返回局部对象

Person doWork2()
{
  Person p1;
  cout << "doWork2 p1地址: " << &p1 << endl;
  return p1;
}

void test03()
{
  Person p = doWork2();
  cout << "test03 p地址：" << &p << endl;
}

int main()
{
  // test01();
  // test02();
  test03();
  return 0;
}