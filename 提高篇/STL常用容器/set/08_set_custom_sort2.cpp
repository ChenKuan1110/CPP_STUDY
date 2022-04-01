/**
 * 改变 set 默认排序规则
 * 自定义数据类型
*/

#include <iostream>
using namespace std;
#include <set>

class Person
{
  public:
    string name;
    int age;
    Person(string name, int age)
    {
      this->age = age;
      this->name = name;
    }
    void showInfo()
    {
      cout << this->name << " " << this->age << endl;
    }
};

// 仿函数
class PersonCompare
{
  public:
    bool operator()(const Person &pa, const Person &pb) const
    {
      if(pa.age == pb.age) // 需要指定次要排序规则，否则，当年龄相同的就添加不进来
      {
        return pa.name > pb.name;
      }
      return pa.age > pb.age;
    }
};

void test()
{

  // 自定义的数据类型，都会指定 set 排序规则
  set<Person, PersonCompare> ps;
  ps.insert(Person("张三", 18));
  ps.insert(Person("李四", 19));
  ps.insert(Person("王五", 19));
  ps.insert(Person("赵六", 19));

  for (set<Person, PersonCompare>::iterator it = ps.begin(); it != ps.end(); it++)
  {
    cout << it->name << " " << it->age << endl;
  }
}

int main()
{
  test();
  return 0;
}
