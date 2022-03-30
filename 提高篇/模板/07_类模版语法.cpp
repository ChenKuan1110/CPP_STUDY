#include <iostream>

using namespace std;

// 类模版语法

template<typename nameType, typename ageType>
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
  Person<string, int> p1("孙悟空", 9999);
  p1.showInfo();
}

int main()
{
  test();
  return 0;
}