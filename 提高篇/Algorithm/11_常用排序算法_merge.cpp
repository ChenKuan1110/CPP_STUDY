/**
 * merge(iterator beg1, iterator end2, iterator beg2, iterator end2, iterator des_begin)
*/  

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void myPrint(int v)
{
  cout << v << " ";
}

void test1()
{
  vector<int> v1;
  vector<int> v2;

  for (int i = 0; i < 10;i++)
  {
    v1.push_back(i + 1);
  }
  v1.push_back(100);
  v1.push_back(-10);
  for (int i = 100; i>80; i--)
  {
    v1.push_back(i);
  }

  vector<int> desV;
  desV.resize(v1.size() + v2.size()); // 分配空间大小

  merge(v1.begin(), v1.end(), v2.begin(), v2.end(), desV.begin());

  for_each(desV.begin(), desV.end(), myPrint);
  cout << endl;
}

int main()
{
  test1();
  return 0;
}
