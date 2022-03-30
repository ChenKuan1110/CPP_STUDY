#include <iostream>
using namespace std;
#include <vector>


// vector 嵌套 vector

void test()
{
  vector< vector<int> > v;

  // 创建小容器
  vector<int> v1;
  vector<int> v2;
  vector<int> v3;
  vector<int> v4;

  
  // 内部容器添加数据
  for (int i = 1; i < 20;i++)
  {
    v1.push_back(1 * i);
    v2.push_back(2 * i);
    v3.push_back(3 * i);
    v4.push_back(4 * i);
  }

  // 添加内部容器到外部容器
  v.push_back(v1);
  v.push_back(v2);
  v.push_back(v3);
  v.push_back(v4);

  for (vector< vector<int> >::iterator it = v.begin(); it != v.end(); it++)
  {
    for (vector<int>::iterator i_it = (*it).begin(); i_it != (*it).end(); i_it++)
    {
      cout << *i_it << " ";
    }
    cout << endl;
  }
}

int main()
{
  test();
  return 0;
}
