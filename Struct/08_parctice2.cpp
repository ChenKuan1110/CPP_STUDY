#include <iostream>
using namespace std;

struct Hero
{
  string name;
  int age;
  string gender;
};

void sortByAge(Hero hero[], int len)
{
  void printInfo(Hero hero[], int len); // 函数声明
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = 0; j < len - 1 - i; j++)
    {
      if(hero[j].age > hero[j+1].age)
      {
        Hero tmpHero;
        tmpHero = hero[j];
        hero[j] = hero[j + 1];
        hero[j + 1] = tmpHero;
      }
    }
  }
  // cout << "排序方法中调用 （已排序） " << endl;
  // printInfo(hero, len);
}

void printInfo(Hero hero[], int len)
{
  for (int i = 0; i < len;i++)
  {
    cout << hero[i].name;
    cout << "\t" << hero[i].age;
    cout << "\t" << hero[i].gender << endl;
  }
}

int main()
{
  Hero hero[5] = {
      {"刘备", 23, "男"},
      {"关羽", 22, "男"},
      {"张飞", 20, "男"},
      {"赵云", 21, "男"},
      {"貂蝉", 19, "女"}};

  int len = sizeof(hero) / sizeof(hero[0]);
  cout << "排序前：" << endl;
  printInfo(hero, len);

  sortByAge(hero, len);

  cout << "排序后：" << endl;
  printInfo(hero, len);

  return 0;
}
