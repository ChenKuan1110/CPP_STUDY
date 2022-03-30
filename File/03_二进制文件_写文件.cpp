#include <iostream>
using namespace std;
#include <fstream>

// 写二进制文件

class Person
{
  public:
    char m_name[64]; // 姓名
    // string m_name; // 姓名
    int m_age; // 年龄
};

int main()
{
  ofstream ofs("./person.txt", ios::binary | ios::out);

  Person zs = {"张三", 18};
  // 写文件
  ofs.write((const char *)&zs, sizeof(zs));

  ofs.close();

  return 0;
}