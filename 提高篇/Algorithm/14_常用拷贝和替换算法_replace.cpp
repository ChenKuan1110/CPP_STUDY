/**
 * replace(iterator beg, iterator end, oldValue, newValue)
*/

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void printFn(int value)
{
  cout << value << " ";
}

void test()
{
  vector<int> v1;
  v1.push_back(10);
  v1.push_back(20);
  v1.push_back(100);
  v1.push_back(30);
  v1.push_back(200);
  v1.push_back(100);

  cout << "原容器" << endl;
  for_each(v1.begin(), v1.end(), printFn);
  cout << endl;
  // 替换元素 将 100 替换为 1000
  replace(v1.begin(), v1.end(), 100, 1000);
  cout << "替换后" << endl;
  for_each(v1.begin(), v1.end(), printFn);
  cout << endl;
}

int main()
{
  test();
  return 0;
}
