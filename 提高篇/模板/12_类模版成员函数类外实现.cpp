#include <iostream>

using namespace std;

template <typename T1, typename T2>
class Person
{
  public:
    Person(T1 name, T2 age);
    void showInfo();
    T1 name;
    T2 age;
};

// 类模版的类外实现
template<typename T1, typename T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
  cout << "Person 类模版的类外实现的构造函数被调用" << endl;
  this->name = name;
  this->age = age;
}

template <typename T1, typename T2>
void Person<T1,T2>::showInfo()
{
  cout << "name: " << this->name << " age: " << this->age << endl;
}

void test()
{
  Person<string, int> p1("张三", 18);
  p1.showInfo();
}

int main()
{
  test();
  return 0;
}