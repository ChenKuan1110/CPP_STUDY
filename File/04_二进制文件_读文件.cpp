#include <iostream>
using namespace std;
#include <fstream>

class Person
{
  public:
    char m_name[64];
    int m_age;
};


void test()
{
  ifstream ifs;
  ifs.open("./person.txt", ios::in | ios::binary);

  if(!ifs.is_open()){
    cout << "打开文件失败" << endl;
    return;
  }
  cout << "打开文件成功" << endl;

  // 读二进制文件
  Person p;
  ifs.read((char *)&p, sizeof(Person));

  cout << "姓名：" << p.m_name << " 年龄：" << p.m_age << endl;

  ifs.close();
}

int main()
{
  test();
  return 0;
}