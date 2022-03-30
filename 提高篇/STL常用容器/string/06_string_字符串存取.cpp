#include <iostream>
using namespace std;

// 字符串存取
void test()
{
  string str = "abcdefg";
  cout << str << endl;
  cout << str[5] << endl;
  str[2] = 'x';
  str.at(3) = 'A';
  cout << str << endl;

  for (int i = 0; i < str.size();i++)
  {
    cout << str[i] << " ";
  }
  cout << endl;
  string str1 = "你好，我是法外狂徒张三";
  cout << "size(): " << str1.size() << endl;
  cout << "length(): " << str1.length() << endl;
  for (int i = 0; i < str1.size(); i++)
  {
    cout << (int)str1[i] << " ";
  }
  cout << endl;

  cout << string(50, '-');
  for (int i = 0; i < str1.size();i++)
  {
    cout << str.at(i) << " ";
  }
  cout << endl;
}

int main()
{
  test();
  return 0;
}