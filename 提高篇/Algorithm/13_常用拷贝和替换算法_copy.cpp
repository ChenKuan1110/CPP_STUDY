/**
 * copy(iterator beg, iterator end, iterator dst)
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
  for (int i = 0; i < 10;i++)
  {
    v1.push_back(i + 1);
  }
  vector<int> v2;
  v2.resize(v1.size());

  // 利用拷贝算法将 v1 赋值给新容器;
  copy(v1.begin(), v1.end(), v2.begin());
  cout << "v2.sieze() :" << v2.size() << endl;

  for_each(v2.begin(), v2.end(), printFn);
  cout << endl;
}

int main()
{
  test();
  return 0;
}
