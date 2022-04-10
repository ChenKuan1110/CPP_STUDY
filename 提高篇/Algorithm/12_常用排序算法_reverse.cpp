/**
 * reverse(iterator beg, iterator end)
*/

#include <iostream>
using namespace std;
#include <vector>


void myPrint(int v)
{
  cout << v << " ";
}

void test1()
{
  vector<int> v;
  for (int i = 0; i < 10;i++)
  {
    v.push_back(i);
  }
  cout << "反转前" << endl;
  for_each(v.begin(), v.end(), myPrint);
  cout << endl;
  // 反转
  reverse(v.begin(), v.end());
  cout << "反转后：" << endl;
  for_each(v.begin(), v.end(), myPrint);
  cout << endl;
}

int main()
{
  test1();
  return 0;
}
