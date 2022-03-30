#include <iostream>

using namespace std;

// 模版的局限性
// 模版不是万能的，有些的数据类型，需要提供具体化的方式做特殊实现

// 对比两个数据是否相等的函数
template<typename T>
bool myCompare(T &a, T &b)
{
  return a == b;
}

void test01()
{
  int a = 10;
  int b = 20;
  cout << " a == b :" << myCompare(a, b) << endl;
}

class Person
{
  public:
    Person(string name, int age)
    {
      this->name = name;
      this->age = age;
    }
    string name;
    int age;
    // 解决方式1: 运算符重载
    // bool operator==(Person & p)
    // {
    //   return this->age == p.age && this->name == p.name;
    // }
};

// 解决方式2:
// 使用具体化的Person 版本的实现代码，具体化优先调用
template<> bool myCompare(Person &p1, Person &p2)
{
  return p1.age == p2.age && p1.name == p2.name;
}

void test02()
{
  Person p1("张三", 18);
  Person p2("张三", 18);
  cout << "p1 == p2 :" << myCompare(p1, p2) << endl;
}

int main()
{
  test01();
  test02();
  return 0;
}