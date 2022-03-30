#include <iostream>

using namespace std;

struct Student
{
  string name;
  int age;
  int score;
};

int
main()
{
  struct Student stu = {"张三", 18, 640};

  // 定义结构体 Student 指针， 指向变量 stu 的地址
  struct Student *p = &stu;

  // 利用指针 将 stu 的年龄修改为 19 , 使用 -> 操作符
  p->age = 19;

  cout << stu.age << endl;
  return 0;
}