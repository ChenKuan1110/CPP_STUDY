#include <iostream>

using namespace std;


class Person
{
  string m_name;
  int m_age;

public:
  void setName(string name)
  {
    m_name = name;
  }
  string getName()
  {
    return m_name;
  }
  void setAge(int age)
  {
    // 控制
    m_age = age >= 0 && age <= 150 ? age : 0;
  }
  int getAge()
  {
    return m_age;
  }
  void printInfo()
  {
    cout << "姓名：" << m_name << "\t年龄：" << m_age << endl;
  }
};

int main()
{
  Person p1;
  p1.setName("张三");
  p1.setAge(151);
  p1.printInfo();


  return 0;
}