#include <iostream>

using namespace std;


class Person
{
  private:
    string m_name;
    int m_age;

  public:
    Person()
    {
      cout << "构造函数被调用" << endl;
    }
    Person(string name, int age)
    {
      cout << "构造函数被调用 (name, age)" << endl;
      m_name = name;
      m_age = age;
    }
    void showInfo()
    {
      cout << m_name << " " << m_age << endl;
    }
    ~Person()
    {
      cout << "析构函数被调用" << endl;
    }
};

void test01()
{
  Person p;
}

void test02()
{
  Person p1 = Person("张三", 26);
  p1.showInfo();
}

int main()
{
  // test01();

  Person p;

  system("read");
  return 0;
}