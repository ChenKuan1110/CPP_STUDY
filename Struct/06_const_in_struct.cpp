#include <iostream>
using namespace std;

struct student
{
  string name;
  int age;
  int score;
};

// const 使用场景
// 此处使用 指针来指向 student 结构体变量，可以节省 值传递拷贝开销
void printStudent(const student *stu)
{
  // stu->age = 18; // 操作失败
  cout << stu->name;
  cout << "\t" << stu->age;
  cout << "\t" << (*stu).score; // *stu.score == stu->score
  cout << endl;
}

int main()
{
  student stu;
  stu.name = "张三";
  stu.age = 18;
  stu.score = 670;
  printStudent(&stu);
  return 0;
}