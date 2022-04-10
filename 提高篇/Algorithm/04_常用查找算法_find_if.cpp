/**
 * 常用查找方法： 按条件查找
 * find_if(iterator beg, iterator end, _Pred)
*/

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class GreatFive
{
  public:
    bool operator() (int v)
    {
      return v > 5;
    }
};


// 查找自定义数据类型
void test1()
{
  vector<int> v;
  for (int i = 0; i < 10;i++)
  {
    v.push_back(i + 1);
  }

  vector<int>::iterator pos = find_if(v.begin(), v.end(), GreatFive());
  if(pos != v.end())
  {
    cout << "查找到符合条件的内容：" << *pos << endl;
  }
  else
  {
    cout << "没有找到符合条件的内容" << endl;
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
};

class AgeGT20
{
public:
  bool operator()(Person &p1)
  {
    return p1.age > 20;
  }
};

// 自定义数据类型 按条件查找
void test2()
{
  vector<Person> vp;
  Person p1("张三", 19);
  Person p2("李四", 20);
  Person p3("王五", 21);
  Person p4("赵六", 22);
  Person p5("刘七", 23);

  vp.push_back(p1);
  vp.push_back(p2);
  vp.push_back(p3);
  vp.push_back(p4);
  vp.push_back(p5);

  // 查找 年龄大于21 的人

  vector<Person>::iterator pos = find_if(vp.begin(), vp.end(), AgeGT20());
  if(pos != vp.end())
  {
    cout << "找到符合条件的人员：" << pos->name << " " << pos->age << endl;
  }
  else
  {
    cout << "没有找到符合条件的人员信息" << endl;
  }
}

int main()
{
  test1();
  test2();
  return 0;
}
