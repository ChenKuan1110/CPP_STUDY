/**
 * replace_if(iterator beg, iterator end, _pred, newValue)
*/

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void printFn(int value)
{
  cout << value << " ";
}

class Gt100Lt200Pred
{
public:
  bool operator()(int v)
  {
    return v > 100 && v < 200;
  }
};

void test()
{
  vector<int> v1;
  v1.push_back(10);
  v1.push_back(20);
  v1.push_back(100);
  v1.push_back(30);
  v1.push_back(200);
  v1.push_back(150);
  v1.push_back(180);
  v1.push_back(100);

  cout << "原容器" << endl;
  for_each(v1.begin(), v1.end(), printFn);
  cout << endl;

  // 替换元素 （大于100，小于200）为1000
  replace_if(v1.begin(), v1.end(), Gt100Lt200Pred(), 1000);
  cout << "替换后" << endl;
  for_each(v1.begin(), v1.end(), printFn);
  cout << endl;
}

int main()
{
  test();
  return 0;
}
