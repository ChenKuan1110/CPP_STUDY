/**
 * 评委打分案例：
 * 5名选手， 10个评委打分，规则： 去掉最高分最低分，再取平均分
*/
#include <iostream>
using namespace std;
#include <vector>
#include <deque>
#define ACTORS_NUM 5


// 演员类
class Person
{
  string name;
  double score; // 记录得分
  public:
    Person(string name, double score)
    {
      this->name = name;
      this->score = score;
    }
    void setScore(double score)
    {
      this->score = score;
    }
    void printInfo()
    {
      cout << this->name << " 得分：" << this->score << endl;
    }
};

// 初始化演员
void initActors(vector<Person> &v)
{
  string actorsNameSeed = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  for (int i = 0; i < ACTORS_NUM; i++)
  {
    string name = string("演员") + actorsNameSeed[i];
    Person p(name, 0);
    v.push_back(p);
  }
}

// 模拟打分
void setScore(vector<Person> &v)
{
  for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
  {
    // 分数容器
    deque<double> scores;
    
    // 模拟产生10个分数
    for (int i = 0; i < 10;i++)
    {
      // 随机产生分数 60 - 100
      int score = rand() % 41 + 60;
      scores.push_back(score);
    }

    // for (deque<double>::iterator dit = scores.begin(); dit != scores.end(); dit++)
    // {
    //   cout << *dit << " ";
    // }
    // cout << endl;

    // 排序
    sort(scores.begin(), scores.end());

    //去除最高分和最低分
    scores.pop_back();
    scores.pop_front();

    // 计算去除后的总分
    double sum = 0;
    for (deque<double>::iterator dit = scores.begin(); dit != scores.end(); dit++)
    {
      sum += *dit;
    }

    // 计算平均分
    double avg = sum / scores.size();

    // cout << "计算平均分" << avg << endl;

    // 设置分数
    (*it).setScore(avg);
  }
}

void printResult(vector<Person> &v)
{
  for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
  {
    (*it).printInfo();
  }
}

void test()
{
  // 初始化随机数种子
  srand((unsigned int)time(NULL));
  //演员容器
  vector<Person> actors;
  // 初始化演员
  initActors(actors);
  // 设置分数
  setScore(actors);
  // 打印结果
  printResult(actors);
}

int main()
{
  test();
  return 0;
}
