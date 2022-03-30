#include <iostream>

using namespace std;

class Person
{
  private:
    string name;
    int age;

  public:
    Person(string name, int age)
    {
      // this使用 ，解决形参和成员变量重名问题
      this->name = name;
      this->age = age;
    }
    Person eat()
    {
      cout << "吃饭" << endl;

      // 用途2: 返回当前实例
      return *this;
    }
    Person run()
    {
      cout << "跑步" << endl;
      return *this;
    }
    void showInfo()
    {
      cout << "姓名：" << name << " 年龄:" << this->age << endl;
    }
};

void test()
{
  Person p("张三", 36);
  p.run().eat().showInfo();
}

int main()
{
  test();
  return 0;
}