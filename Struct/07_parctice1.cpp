#include <iostream>
using namespace std;

struct Student
{
  string sName;
  int score;
};

struct Teacher
{
  string tName;
  Student students[5];
};


// 初始化函数
void init(Teacher * pt, string *ptn, string *psn, int *pss)
{
  for (int i = 0; i < 3;i++)
  {
    pt->tName = ptn[i];
    for (int j = 0; j < 5;j++)
    {
      pt->students[j].sName = *psn;
      pt->students[j].score = *pss;
      psn++;
      pss++;
    }
    pt++;
  }
}

void print(Teacher * pt)
{
  for (int i = 0; i < 3;i++)
  {
    cout << "老师姓名： " << pt->tName << endl;
    for (int j = 0; j < 5; j++)
    {
      cout << "\t"
           << "学生：" << pt->students[j].sName
            << "\t" << pt->students[j].score << endl;
    }
    pt++;
  }
}

int main()
{
  string tNames[3] = {"张老师", "李老师", "王老师"};
  string sNames[3][5] = {
    {"小张","小李", "小王", "小赵", "小刘"},
    {"李雷", "韩梅梅", "李华", "李明", "张红"},
    {"Tom","Jack","Tony","Lucy","Jim"}
  };
  int sScores[3][5] = {
    {70,78,89,90,100},
    {89,98,87,95,60},
    {89,78,67,90,100},
  };

  // 定义老师数组
  Teacher teachers[3];

  // 初始化函数
  init(teachers, tNames, &sNames[0][0], &sScores[0][0]);

  // 打印函数
  print(teachers);

  return 0;
}