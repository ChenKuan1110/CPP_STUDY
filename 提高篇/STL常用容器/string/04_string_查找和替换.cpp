#include <iostream>
using namespace std;
#include <string>

// 字符串查找和替换

// 查找
void test()
{
  string paragraph = "STL is the short word of Standard Template Library in CPP.";

  int pos = paragraph.find("CPP");
  cout << pos << endl;
  pos = paragraph.find("Hello");
  cout << pos << endl;

  cout << (pos == string::npos) << endl;

  cout << string::npos << endl;

  // rfind
  pos = paragraph.rfind("CPP");
  cout << pos << endl; 
}

// 替换
void test1()
{
  string str = "你好，这是张三！请注意你的言行";
  cout << str << endl;
  str.replace(6, 2, "法外狂徒张三");
  cout << str << endl;

  string str1 = "abcdefghijklmn";
  cout << str1 << endl;
  str1.replace(2, 5, "123456");
  cout << str1 << endl;
}

int main()
{
  test();
  cout << string(10, '*') << endl;
  test1();
  return 0;
}