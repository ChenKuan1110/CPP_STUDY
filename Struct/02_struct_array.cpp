#include <iostream>

using namespace std;

// 定义结构体
struct Student
{
  string name;
  int age;
  double score;
};

int main()
{
  // 声明结构体数组 并初始化
  struct Student students[3] = {
    {"张三", 18, 640},
    {"李四", 17, 648},
    {"王五", 18, 599}
  };

  for (int i = 0; i < sizeof(students) / sizeof(Student); i++)
  {
    cout << "名字：" << students[i].name;
    cout << "\t年龄：" << students[i].age;
    cout << "\t 成绩：" << students[i].score;
    cout << endl;
  }
  return 0;
}