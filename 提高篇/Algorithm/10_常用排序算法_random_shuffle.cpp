/**
 * 常用排序算法 - random_shuffle
 * random_shuffle(iterator beg, iterator end);
 */
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void printValue(int v)
{
  cout << v << " ";
}

void test1()
{
  srand(100);
  vector<int> v;
  for(int i = 0; i < 10;i++)
  {
    v.push_back(i);
  }

  cout << "重洗之前：";
  for_each(v.begin(), v.end(), printValue);
  cout << endl;
  // 洗牌
  // TOFIXIT: 在vscode 上编译不过的错误
  random_shuffle(v.begin(), v.end());
  cout << "重洗之后：";
  for_each(v.begin(), v.end(), printValue);
  
}

int main()
{
  test1();
  return 0;
}
