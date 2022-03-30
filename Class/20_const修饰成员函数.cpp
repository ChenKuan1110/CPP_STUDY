#include <iostream>

using namespace std;

// 空指针调用成员函数

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
    void showClassName()
    {
      cout << "这是 Person 类" << endl;
    }
    void showPersonName()
    {
      // 报错原因： 空指针

      // 解决方式：
      if(this == NULL)
        return;
      cout << "年龄是： " << this->age << endl;
    }
};

void test()
{
  Person *p = NULL; // 空指针
  p->showClassName();
  p->showPersonName();
}

int main()
{
  test();
  return 0;
}