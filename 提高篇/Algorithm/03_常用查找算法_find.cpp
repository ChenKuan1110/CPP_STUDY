/**
 * 常用查找算法 - find
*/

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>


// 查找内置数据类型
void test1()
{
  vector<int> v;
  for (int i = 0; i < 10;i++)
  {
    v.push_back(i + 1);
  }

  // 查找 元素 5
  vector<int>::iterator pos = find(v.begin(), v.end(), 50);
  if(pos != v.end())
  {
    cout << "查找到元素" << *pos << endl;
  }
  else
  {
    cout << "没有找到元素" << endl;
  }
}

class Person
{
public:
  string name;
  int age;
  Person(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  // 查找自定义数据类型时需要重载 operator==, 让 find 函数知道如何比较 Person 数据类型
  bool operator==(const Person &p)
  {
    return (this->name == p.name) && (this->age == p.age);
  }
};

// 查找自定义数据类型
void test2()
{
  vector<Person> pv;

  Person p1("张三", 18);
  pv.push_back(p1);
  Person p2("李四", 20);
  pv.push_back(p2);
  Person p3("王五", 22);
  pv.push_back(p3);
  Person p4("赵六", 34);
  pv.push_back(p4);
  Person p5("刘七", 18);
  pv.push_back(p5);

  Person pf("王五", 22);

  vector<Person>::iterator pos = find(pv.begin(), pv.end(), pf);
  if(pos != pv.end())
  {
    cout << "找到了: " << pos->name << " " << pos->age << endl;
  }
  else
  {
    cout << "没有找到" << pf.name << endl;
  }
}

int main()
{
  test1();
  test2();
  return 0;
}
