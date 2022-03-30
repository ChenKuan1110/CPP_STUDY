# include <iostream>

using namespace std;

// 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student
{
public:
  string name;
  string no;
  void showStudentInfo()
  {
    cout << "学生姓名：" << name << "\t学号：" << no << endl;
  }
  void setName(string name1)
  {
    name = name1;
  }
  void setNo(string no1)
  {
    no = no1;
  }
};

int main()
{
  Student stu;
  stu.name = "张三";
  stu.no = "10001";
  stu.showStudentInfo();

  Student stu2;

  stu2.setName("李四");
  stu2.setNo("10001");
  stu2.showStudentInfo();

  return 0;
}