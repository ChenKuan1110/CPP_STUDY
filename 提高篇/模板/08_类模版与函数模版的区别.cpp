#include <iostream>

using namespace std;

// 类模版与函数模版的区别
// 1. 类模版中没有自动类型推导方式
// 2. 类模版在模版参数列表中可以有默认参数

template<class nameType, class ageType=int>
class Person
{
  public:
    Person(nameType name, ageType age)
    {
      this->name = name;
      this->age = age;
    }
    void showInfo()
    {
      cout << "name: " << this->name << " age:" << this->age << endl;
    }
    nameType name;
    ageType age;
};

void test()
{
  // Person p("张三", 18); // use of class template 'Person' requires template arguments
  Person<string> p1("孙悟空", 9999);
  p1.showInfo();
}

int main()
{
  test();
  return 0;
}