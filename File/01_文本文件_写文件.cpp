#include <iostream>
using namespace std;
// 包含头文件
#include <fstream>


// 文本文件写文件

int main()
{
  // 创建流对象
  ofstream ofs;
  // 打开文件
  ofs.open("test.csv", ios::out);
  // 写文件
  // ofs << "Hello world, hello cpp , hello file!!!" << endl;
  ofs << "姓名" << "," << "性别" << "," << "年龄" << endl;
  ofs << "张三" << "," << "男" << "," << "20" << endl;
  ofs << "李四" << "," << "女" << "," << "19" << endl;
  ofs << "王五" << "," << "男" << "," << "22" << endl;
  ofs.close();
  return 0;
}