#include <iostream>
#include <string>

using namespace std;

// string 赋值操作

void test()
{
  string str1;
  str1 = "hello,std, string";
  string str2;
  str2 = str1;
  string str3;
  str3 = 'a';
  string str4;
  str4.assign("hello world");
  string str5;
  str5.assign("hello world", 6);
  string str6;
  str6.assign("My name is ChenKuan!");
  string str7;
  str7.assign(str1);
  string str8;
  str8.assign(10, '*');

  cout << str1 << endl;
  cout << str2 << endl;
  cout << str3 << endl;
  cout << str4 << endl;
  cout << str5 << endl;
  cout << str6 << endl;
  cout << str7 << endl;
  cout << str8 << endl;
}

int main()
{
  test();
  return 0;
}