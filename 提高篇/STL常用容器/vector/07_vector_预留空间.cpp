#include <iostream>
using namespace std;
#include <vector>

void test()
{
  vector<int> v;

  // 使用 reseve() 预留空间，减少动态扩展时的内存分配
  v.reserve(100000);

  int num = 0; // 统计内存开辟次数
  int *p = NULL;
  for (int i = 0; i < 100000; i++)
  {
    v.push_back(i+1);
    if(p != &v[0])
    {
      p = &v[0]; // 该变初始指针变量 p 的指向
      num++;
    }
  }

  cout << "扩展次数： " << num << endl;  // 18 -> 1
}

int main()
{
  test();
  return 0;
}
