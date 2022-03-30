# include <iostream>

using namespace std;

// 类模版实例作函数参数的三种方式
// 1. 指定传入的类型
// 2. 参数模版化
// 3. 整个类模版化

template <class NameType, class AgeType>
class Person
{
  public:
    Person(NameType name, AgeType age)
    {
      this->name = name;
      this->age = age;
    }
    void showPerson()
    {
      cout << "name: " << this->name << " age: " << this->age << endl;
    }
    NameType name;
    AgeType age;
};

// 1.指定传入类型
void showPersonInfo1(Person<string, int> &p)
{
  p.showPerson();
}

void test01()
{
  Person<string, int> p1("孙悟空", 1000);
  showPersonInfo1(p1);
}

// 2. 参数模版化
template<typename T1, typename T2>
void showPersonInfo2(Person<T1,T2> &p)
{
  p.showPerson();
  // 可以利用如下方式查看 T1 T2的类型
  cout << "T1的类型：" << typeid(T1).name() << endl;
  cout << "T2的类型：" << typeid(T2).name() << endl;
}

void test02()
{
  Person<string, int> p2("猪八戒", 600);
  showPersonInfo2<string, int>( p2);
}


// 整个类模版化
template <class T>
void showPersonInfo3(T &p)
{
  p.showPerson();
  cout << "T类型：" << typeid(T).name() << endl;
}

void test03()
{
  Person<string, int> p3("唐僧", 40);
  showPersonInfo3(p3);
}

int main()
{
  test01();
  test02();
  test03();
  return 0;
}
