/**
 * map 
 * size()
 * empty()
 * swap()
*/

#include <iostream>
using namespace std;
#include <map>

void test()
{
  map<int, int> m;

  m.insert(pair<int, int>(1, 100));
  m.insert(pair<int, int>(2, 200));
  m.insert(pair<int, int>(3, 300));
  m.insert(pair<int, int>(4, 400));
  m.insert(pair<int, int>(5, 500));

  if(m.empty())
  {
    cout << "map为空" << endl;
  }
  else
  {
    cout << "map size:" << m.size() << endl;
  }

  map<int, int> m2;
  m2.insert(pair<int,int>(100, 1));
  m2.insert(pair<int,int>(100, 1));

  // 交换
  cout << "交换前：m.size() :" << m.size() << " ,m2.size(): " << m2.size() << endl;
  m2.swap(m);
  cout << "交换后：m.size() :" << m.size() << " ,m2.size(): " << m2.size() << endl;
}

int main()
{

  test();
  return 0;
}
