/**
 * 二维数组应用案例：
 *  考试成绩统计
*/

#include <iostream>

using namespace std;

int main()
{
  // 成绩二维数组
  int stu[3][3] = {
    {100,100,100},
    {90, 50, 100},
    {60, 70, 80}
  };

  // 学生数组
  string names[3] = {"张三", "李四", "王五"};

  for (int i = 0; i < sizeof(stu) / sizeof(stu[0]); i++)
  {
    int sum = 0;
    for (int j = 0; j < sizeof(stu[0]) / sizeof(stu[0][0]); j++)
    {
      sum += stu[i][j];
    }
    cout << names[i] << " 同学总成绩为：" << sum << endl;
  }
  return 0;
}