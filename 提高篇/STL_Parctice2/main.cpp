#include <iostream>
using namespace std;
#include <map>
#include <vector>
#include <ctime>


// 策划、美术、研发
#define SCHAME 1 
#define ART 2
#define RESEARCH 3

class Employee
{
  public:
    string name;
    double salary;
    Employee(string name, double salary)
    {
      this->name = name;
      this->salary = salary;
    }
    void printInfo()
    {
      cout << this->name << "\t" << this->salary << endl;
    }
};

void initEmployee(vector<Employee> &emp)
{
  string nameSeed = "ABCDEFGHIJ";
  for (int i = 0; i < 10; i++)
  {
    string name = string("职员") + nameSeed[i];
    double salary = rand() % 20000 + 15000;

    Employee e(name, salary);
    emp.push_back(e);
  }
}

// 分配部门
void assignDepartment(vector<Employee> &emp, multimap<int, Employee> &group)
{
  for (vector<Employee>::iterator it = emp.begin(); it != emp.end();it++)
  {
    int departmentId = rand() % 3 + 1; // 产生随机的部门编号 1，2，3
    // 按编号 插入multimap 中
    group.insert(make_pair(departmentId, *it));
  }
}

// 打印职工分组信息
void printDepartmentInfo(multimap<int, Employee> &group)
{
  // 策划部门
  cout << "策划部门:" << endl;
  int schameCounts = group.count(SCHAME); // 获取策划部门人数
  multimap<int, Employee>::iterator startPos = group.find(SCHAME); // 获取迭代器第一个位置
  for (int idx = 0;startPos != group.end() && idx < schameCounts; startPos++,idx++)
  {
    cout << "\t";
    startPos->second.printInfo();
  }

  //美术部门
  cout << "美术部门:" << endl;
  int artCount = group.count(ART);
  startPos = group.find(ART);
  for (int idx = 0;startPos != group.end() && idx < artCount; startPos++,idx++)
  {
    cout << "\t";
    startPos->second.printInfo();
  }

  // 研发部门
  cout << "研发部门:" << endl;
  int researchCount = group.count(RESEARCH); 
  startPos = group.find(RESEARCH); 
  for (int idx = 0;startPos != group.end() && idx < researchCount; startPos++,idx++)
  {
    cout << "\t";
    startPos->second.printInfo();
  }
}

int main()
{
  srand((unsigned int)time(NULL));
  // 职工容器
  vector<Employee> emp;
  // 员工分组
  multimap<int, Employee> group;
  // 初始化职工信息
  initEmployee(emp);
  assignDepartment(emp, group);
  printDepartmentInfo(group);
  return 0;
}
