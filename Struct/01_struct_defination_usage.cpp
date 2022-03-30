#include <iostream>

using namespace std;

/**
 * 定义和使用 结构体
 * 
 */
// 自定义的数据类型，利用一些已知数据类型组成的一个集合
// 1. 创建学生的数据类型
struct Student
{
  // 成员列表
  string name;  // 姓名
  int age;      // 年龄
  double score; // 分数
} s3;

int main()
{
  // 2. 通过学生类型创建具体学生

  // 2.1 方式1 创建结构体变量
  struct Student s1;
  s1.name = "张三";
  s1.age = 18;
  s1.score = 100;

  // 2.2 方式2  创建结构体变量并赋初值
  struct Student s2 = {"李四", 19, 98};

  // 2.3 方式3 定义结构体时创建变量
  s3.name = "王五";
  s3.age = 20;
  s3.score = 99;

  cout << s1.name << s1.age << " " << s1.score << endl;
  cout << s2.name << s2.age << " " << s2.score << endl;
  cout << s3.name << s3.age << " " << s3.score << endl;

  cout << "sizeof(Student) :" << sizeof(Student) << endl;
  cout << "sizeof(s1) :" << sizeof(s1) << endl;
  cout << "sizeof(s2)" << sizeof(s2) << endl;

  cout << sizeof(s2.name) << " " << sizeof(s2.age) << " " << sizeof(s2.score) << endl;

  return 0;
}