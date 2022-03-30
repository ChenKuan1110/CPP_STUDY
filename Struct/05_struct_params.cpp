#include <iostream>
using namespace std;

struct student
{
  string name;
  int age;
  int score;
};

// 值传递
void printStudentInfo(student stu)
{
  cout << "子函数中 姓名：" << stu.name;
  cout << "\t年龄：" << stu.age;
  cout << "\t分数：" << stu.score;
  cout << endl;
}

// 地址传递
void changeStudentInfo(student *p, string name,int age, int score)
{
  p->name = name;
  p->age = age;
  p->score = score;
}

int main()
{
  student stu = {"张三", 18, 640};
  printStudentInfo(stu);
  changeStudentInfo(&stu, "李四", 19, 650);
  printStudentInfo(stu);
  return 0;
}