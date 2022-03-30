#include <iostream>
using namespace std;
#include <vector>

// vector 存放自定义数据类型

class Person
{
  public:
    string name;
    int age;
    Person(){}
    Person(string name, int age)
    {
      this->name = name;
      this->age = age;
    }
    void showInfo()
    {
      cout << this->name << " " << this->age << endl;
    }
};

void test()
{
  vector<Person> persons;
  Person p1("张三", 18);
  Person p2("李四", 19);
  Person p3("王五", 10);
  Person p4("赵六", 58);
  Person p5("王二", 28);
  persons.push_back(p1);
  persons.push_back(p2);
  persons.push_back(p3);
  persons.push_back(p4);
  persons.push_back(p5);


  // 遍历
  for (vector<Person>::iterator it = persons.begin(); it != persons.end(); it++)
  {
    (*it).showInfo();
  }
}

// 存放自定义数据类型， 指针
void test1()
{
  vector<Person*> persons;
  Person p1("张三", 18);
  Person p2("李四", 19);
  Person p3("王五", 10);
  Person p4("赵六", 58);
  Person p5("王二", 28);
  persons.push_back(&p1);
  persons.push_back(&p2);
  persons.push_back(&p3);
  persons.push_back(&p4);
  persons.push_back(&p5);

  // 遍历
  for (vector<Person*>::iterator it = persons.begin(); it != persons.end(); it++)
  {
    (*it)->showInfo();
  }
}

int main()
{
  test();
  cout << "--------" << endl;
  test1();
  return 0;
}