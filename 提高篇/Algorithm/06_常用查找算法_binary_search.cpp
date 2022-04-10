/**
 * 二分查找 binary_search
 * 注意：在无序序列中不可使用
*/
#include <iostream>
using namespace std;
#include <set>
#include <vector>

void test1()
{
  set<int> s;
  for (int i = 0; i < 10;i++)
  {
    s.insert(i + 1);
  }

  int findValue = 6;
  bool isExist= binary_search(s.begin(), s.end(), findValue);
  if(isExist)
  {
    cout << "查找到元素" << endl;
  }
  else 
  {
    cout << "没有找到元素" << endl;
  }
}

void test2()
{
  vector<int> v;
  for (int i = 0; i < 10;i++)
  {
    v.push_back(i+1);
  }
  v.push_back(2);
  // 查找元素 9
  bool isExist = binary_search(v.begin(), v.end(), 9);
  if(isExist)
  {
    cout << "查找到元素" << endl;
  }
  else 
  {
    cout << "没有找到元素" << endl;
  }
}

int main()
{
  test1();
  cout << string(20, '-') << endl;
  test2();
  return 0;
}
