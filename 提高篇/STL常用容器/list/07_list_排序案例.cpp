/**
 * 将 Person 自定义数据类型进行排序， Person 中属性有姓名、年龄、身高
 * 排序规则： 按照年龄进行升序排列，如果年龄相同按照身高进行降序排列
*/

#include <iostream>
using namespace std;
#include <list>
#include <ctime>

class Person
{
  private:
    string name;
    int age;
    double height;

  public:
    Person(string name, int age, double height)
    {
      this->name = name;
      this->age = age;
      this->height = height;
    }
    void printInfo()
    {
      cout << "\t" << this->name << "\t" << this->age << "\t" << this->height << endl;
    }
    int getAge()
    {
      return this->age;
    }
    double getHeight()
    {
      return this->height;
    }
};


// 自定义排序函数
bool myCom(Person &pa , Person &pb)
{
  // 年龄升序 升高降序
  if(pa.getAge() == pb.getAge())
  {
    return pa.getHeight() > pb.getHeight();
  }
  return pa.getAge() < pb.getAge();
}

void solution()
{
  list<Person> persons;

  string nameSeed = "ABCDEFGHIJK";
  // 随机产生 n 个人
  // for (int i = 0; i < 10; i++)
  // {
  //   string name = string("Person") + nameSeed[i];
  //   int age = rand() % 90 + 10;
  //   double height = rand() % 50 + 130;
  //   Person p(name, age, height);
  //   persons.push_back(p);
  // }

  Person p1("张飞", 19, 180);
  Person p2("刘备", 21, 170);
  Person p3("关羽", 20, 185);
  Person p4("曹操", 20, 180);
  Person p5("诸葛亮", 18, 170);
  Person p6("孙权", 18, 175);
  Person p7("鲁肃", 22, 172);
  Person p8("周瑜", 18, 178);
  Person p9("司马懿", 25, 170);
  Person p10("夏侯惇", 22, 175);

  persons.push_back(p1);
  persons.push_back(p2);
  persons.push_back(p3);
  persons.push_back(p4);
  persons.push_back(p5);
  persons.push_back(p6);
  persons.push_back(p7);
  persons.push_back(p8);
  persons.push_back(p9);
  persons.push_back(p10);

  cout << "排序前" << endl;
  for (list<Person>::iterator it = persons.begin(); it != persons.end();it++)
  {
    (*it).printInfo();
  }

  // 排序
  cout << "排序后" << endl;
  persons.sort(myCom); // 使用自定义的排序规则
  for (list<Person>::iterator it = persons.begin(); it != persons.end();it++)
  {
    (*it).printInfo();
  }
}

int main()
{
  srand((unsigned int)time(NULL));
  solution();
  return 0;
}
