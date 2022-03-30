#include <iostream>
#include <string>

using namespace std;

// string 字符串拼接

void test()
{
  string str1 = "Hello";
  cout << str1 << endl;

  str1 += ", This";
  cout << str1 << endl;

  str1 += ' ';
  cout << str1 << endl;

  char * str2 = " is ChenKuan.";
  str1 += str2;
  cout << str1 << endl;

  str1.append("And who are you?");
  cout << str1 << endl;

  str1.append("I'm studing C++ STL String", 20);
  cout << str1 << endl;

  string str3 = "Now I use the string append() func.";
  str1.append(str3);
  cout << str1 << endl;

  string str4 = "Maybe I have many knowledge to learn!";
  str1.append(str4, 0, 30);
  cout << str1 << endl;
}

int main()
{
  test();
  return 0;
}