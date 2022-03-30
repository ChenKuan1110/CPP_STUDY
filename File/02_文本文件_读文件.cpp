#include <iostream>
using namespace std;
// 包含头文件
#include <fstream>

int main()
{
  // 创建流对象
  ifstream ifs;
  //打开文件并判定打开成功与否
  ifs.open("./abc.txt", ios::in);
  if(ifs.is_open())
  {
    cout << "文件打开成功" << endl;
  }else {
    cout << "文件打开失败" << endl;
    return 0;
  }

  // 读数据
  // 方式1
  // char buf[1024] = {0};
  // while(ifs >> buf)
  // {
  //   cout << buf << endl;
  // }

  // 方式2
  // char buf[1024] = {0};
  // while(ifs.getline(buf, sizeof(buf)))
  // {
  //   cout << buf << endl;
  // }

  // 方式3
  // string buf;
  // while(getline(ifs,buf))
  // {
  //   cout << buf << endl;
  // }

  // cout << "------" << endl;
  // cout << buf << endl;

  // 方式4
  char c;
  while((c= ifs.get()) != EOF) // EOF: end of file
  {
    cout << c;
  }

  // 关闭文件流
  ifs.close();
  return 0;
}