/**
 * 常用算法查找 - count
 * * count_if(iterator beg, iterator end, _Pred)
 */
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

// 统计自定义数据类型
class Great11
{
public:
  bool operator()(int v)
  {
    return v > 11;
  }
};

// 按条件统计自定义数据类型
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

  int num = count_if(v.begin(), v.end(), Great11());
  cout << "统计大于11的 元素个数：" << num << endl;
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
};

class AgeGT
{
public:
  int age;
  AgeGT(int age)
  {
    this->age = age;
  }
  bool operator()(Person &p)
  {
    return p.age > age;
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

  int num = count_if(vp.begin(), vp.end(), AgeGT(20));
  cout << "年龄大于20的人数有：" << num << endl;
}

int main()
{

  test1();
  cout << string(20, '-') << endl;
  test2();
  return 0;
}
