/**
 * 常用算法生成算法 fill
 * fill(iterator beg, iterator end, fillValue)
*/
#include <iostream>
using namespace std;
#include <vector>
#include <numeric>

void printFn(int v)
{
  cout << v << " ";
}

void test()
{
  vector<int> v;
  v.resize(10);
  fill(v.begin(), v.end(), 100);

  for_each(v.begin(), v.end(), printFn);
  cout << endl;
}

int main()
{
  test();
  return 0;
}
