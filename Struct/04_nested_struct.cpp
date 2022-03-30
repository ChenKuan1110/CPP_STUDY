#include <iostream>

using namespace std;

// 学生结构体
struct student
{
  string name;
  int age;
  int score;
};

// 老师结构体定义
struct teacher
{
  int id;
  string name;
  int age;
  struct student s; // 子学生的结构体
};

int main()
{
  struct student stu = {"张三", 18, 640};
  struct teacher t;
  t.id = 1001;
  t.name = "李四";
  t.age = 32;
  t.s = stu;

  cout << t.id << endl;
  cout << t.name << endl;
  cout << t.age << endl;
  cout << t.s.name << endl;

  return 0;
}