/**
 * 常用算法查找 - count
 * * count(iterator beg, iterator end, value)
 */
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 统计自定义数据类型
void test1()
{
  vector<int> v;
  v.push_back(10);
  v.push_back(10);
  v.push_back(11);
  v.push_back(10);
  v.push_back(12);
  v.push_back(10);
  v.push_back(17);
  v.push_back(16);
  v.push_back(13);

  int time = count(v.begin(), v.end(), 10);
  cout << "统计10出现的个数： " << time << endl;
}

class Person
{
public:
  int age;
  string name;
  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  bool operator==(const Person & p) const
  {
    return this->age == p.age;
  }
};

// 自定义数据类
void test2()
{
  vector<Person> vp;
  Person p1("张三", 19);
  Person p2("李四", 20);
  Person p3("王五", 20);
  Person p4("赵六", 22);
  Person p5("刘七", 23);

  vp.push_back(p1);
  vp.push_back(p2);
  vp.push_back(p3);
  vp.push_back(p4);
  vp.push_back(p5);

  Person findPerson("Tom", 20);
  int num = count(vp.begin(), vp.end(), findPerson);
  cout << "和Tom同岁的人数有：" << num << endl;
}

int main()
{

  test1();
  cout << string(20, '-') << endl;
  test2();
  return 0;
}
