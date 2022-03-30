#include <iostream>

using namespace std;
#include <string>


class Person
{
public:
  // Person()
  // {
  //   cout << "Person 类无参构造函数调用" << endl;
  // }
  // Person(string name)
  // {
  //   cout << "Person 类有参构造函数调用" << endl;
  //   s_name = name;
  // }
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

/**
 * 默认情况下， C++ 编译器至少给一个类添加三个函数：

1. 默认构造函数（无参，函数体为空）
2. 默认析构函数（无参，函数体为空）
3. 默认拷贝构造函数，对属性进行值拷贝
 */ 

// 如果用户定义有参构造函数， C++ 不再提供默认无参构造函数，但是会提供默认拷贝构造函数
// void test01()
// {
//   Person p1;
//   p1.s_name = "张三";

//   Person p2(p1);

//   cout << "p2的姓名： " << p2.s_name << endl;
// }


void test02()
{
  // Person p; // 如果只提供了有参构造函数，编译器不会生成默认构造
  // Person p() // 如果只提供了拷贝构造，编译器不会提供其他构造
}

int main()
{
  // test01();
  test02();
  return 0;
}